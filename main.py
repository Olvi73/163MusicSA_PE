# -*- coding: UTF-8 -*-

import datetime
import multiprocessing
import sys
import os
import threading
import time

import src.ui.ui
import PyQt5
import src.lyric_by_music
import src.music_by_songsall
import src.word_cloud_by_artist
import src.word_cloud_by_lyric
import src.searchLyric
#
#
# if hasattr(sys, 'frozen'):
#
#     os.environ['PATH'] = sys._MEIPASS + ";" + os.environ['PATH']

from src.ui.ui import Ui_MainWindow
from PyQt5.QtWidgets import QApplication, QMainWindow, QHeaderView, QAbstractItemView, QTableWidgetItem
from PyQt5 import QtCore, QtGui
from PyQt5.QtCore import QEventLoop, QTimer, Qt
from PyQt5.QtGui import QIcon, QPixmap, QCursor

import src.sql_sqlite as sql
from src.lyric_by_music import lyricSpider
from src.music_by_songsall import musicSpider
from src.playlist_by_user import playlistSpider
from src.word_cloud_by_artist import cloudArtist
from src.word_cloud_by_lyric import cloudLyric
from src.searchLyric import searchLyr


# pyuic5 -o ui.py frame2.ui
# pyrcc5 -o icon_rc.py icon.qrc
# import src.ui.icon_rc

class EmittingStr(QtCore.QObject):
    # 定义一个发送str的信号
    textWritten = QtCore.pyqtSignal(str)

    def write(self, text):
        self.textWritten.emit(str(text))
        loop = QEventLoop()
        QTimer.singleShot(100, loop.quit)
        loop.exec_()


class MyMainForm(QMainWindow, Ui_MainWindow):
    def __init__(self, parent=None):
        super(MyMainForm, self).__init__(parent)
        # 关闭窗口边框
        self.setWindowFlags(QtCore.Qt.FramelessWindowHint)
        # 透明窗口
        self.setAttribute(Qt.WA_TranslucentBackground)
        self.setupUi(self)
        self.setWindowTitle('163MusicSA')
        self.setWindowIcon(QIcon(r'./data/icon/icon.png'))
        # QApplication.setStyle('Fusion')
        # 窗口风格Fusion类型
        self.th = None

        self.musicSpider_Button.clicked.connect(self.musicSpider)
        self.lyricSpider_Button.clicked.connect(self.lyricSpider)

        self.cloudLyric_Button.clicked.connect(self.cloudLyric)
        self.cloudArtist_Button.clicked.connect(self.cloudArtist)
        self.shapeFile()
        self.fontFile()
        self.file_Button.clicked.connect(self.open_file)
        self.shapefile_Button.clicked.connect(self.open_Shapefile)
        self.fontfile_Button.clicked.connect(self.open_Fontfile)
        self.min_Button.clicked.connect(self.showMinimized)
        self.close_Button.clicked.connect(self.close)
        self.meButton.clicked.connect(self.meBtn)

        self.music_table.horizontalHeader().setSectionResizeMode(QHeaderView.Stretch)
        self.music_table.horizontalHeader().setSectionResizeMode(0, QHeaderView.Interactive)
        # self.music_table.setEditTriggers(QAbstractItemView.NoEditTriggers)
        self.music_table.setColumnCount(3)
        self.tableinf_Button.clicked.connect(self.getinf)

        self.music_table_2.horizontalHeader().setSectionResizeMode(QHeaderView.Stretch)
        self.music_table_2.horizontalHeader().setSectionResizeMode(0, QHeaderView.Interactive)
        # self.music_table_2.setEditTriggers(QAbstractItemView.NoEditTriggers)
        self.music_table_2.setColumnCount(2)
        self.tableinf_Button_2.clicked.connect(self.getinf_2)

        self.search_lyric.clicked.connect(self.searchlyr)

        self.clear_Button.clicked.connect(self.clear)
        self.clear_Button_2.clicked.connect(self.clear2)
        self.clear_Button_3.clicked.connect(self.clear3)

        sys.stdout = EmittingStr(textWritten=self.outputWritten)
        sys.stderr = EmittingStr(textWritten=self.outputWritten)

    # 任意拖拽
    def mousePressEvent(self, QMouseEvent):
        if QMouseEvent.button() == Qt.LeftButton:
            self.flag = True
            # 获取鼠标相对窗口的位置
            self.m_Position = QMouseEvent.globalPos() - self.pos()
            QMouseEvent.accept()
            # 更改鼠标图标
            # self.setCursor(QCursor(Qt.OpenHandCursor))

    def mouseMoveEvent(self, QMouseEvent):
        if Qt.LeftButton and self.flag:
            # 更改窗口位置
            self.move(QMouseEvent.globalPos() - self.m_Position)
            QMouseEvent.accept()

    def mouseReleaseEvent(self, QMouseEvent):
        self.flag = False
        self.setCursor(QCursor(Qt.ArrowCursor))

    def outputWritten(self, text):
        cursor = self.textBrowser.textCursor()
        cursor.movePosition(QtGui.QTextCursor.End)
        cursor.insertText(text)
        self.textBrowser.setTextCursor(cursor)
        self.textBrowser.ensureCursorVisible()

    def musicSpider(self):
        self.th = threading.Thread(target=self.ms)
        # 设置线程为守护线程，防止退出主线程时，子线程仍在运行
        self.th.setDaemon(True)
        # 新线程启动
        self.th.start()

    def ms(self):
        musicSpider(self.user_idEdit.text())

    def lyricSpider(self):
        self.th = threading.Thread(target=self.ls)
        # 设置线程为守护线程，防止退出主线程时，子线程仍在运行
        self.th.setDaemon(True)
        # 新线程启动
        self.th.start()

    def ls(self):
        lyricSpider(self.user_idEdit.text())


    def cloudLyric(self):
        self.th = threading.Thread(target=self.lc)
        # 设置线程为守护线程，防止退出主线程时，子线程仍在运行
        self.th.setDaemon(True)
        # 新线程启动
        self.th.start()
        # 利用line Edit控件对象text()函数获取界面输入

    def lc(self):
        cloudLyric(self.user_idEdit.text(), self.shapeBox.currentText(), self.fontBox.currentText())
        pix = QPixmap(r'./data/wordcloud/' + self.user_idEdit.text() + '_lyricCloud.png')
        self.cloud_label.setPixmap(pix)
        # 自适应QLabel大小
        self.cloud_label.setScaledContents(True)

    def cloudArtist(self):
        self.th = threading.Thread(target=self.ca)
        # 设置线程为守护线程，防止退出主线程时，子线程仍在运行
        self.th.setDaemon(True)
        # 新线程启动
        self.th.start()

    def ca(self):
        cloudArtist(self.user_idEdit.text(), self.shapeBox.currentText(), self.fontBox.currentText())
        pix = QPixmap(r'./data/wordcloud/' + self.user_idEdit.text() + '_artistCloud.png')
        self.cloud_label.setPixmap(pix)
        # 自适应QLabel大小
        self.cloud_label.setScaledContents(True)

    def shapeFile(self):
        Shapelist = os.listdir(r"./data/wordcloud/shape")
        for item in Shapelist:
            self.shapeBox.addItem(item)

    def fontFile(self):
        Fontlist = os.listdir(r"./data/wordcloud/font")
        for item in Fontlist:
            self.fontBox.addItem(item)

    def open_file(self):  # 打开文件夹
        # f'{os.getcwd()}\data\wordcloud'
        os.startfile(r'.\data\wordcloud')

    def open_Shapefile(self):  # 打开文件夹
        # f'{os.getcwd()}\data\wordcloud'
        os.startfile(r'.\data\wordcloud\shape')

    def open_Fontfile(self):  # 打开文件夹
        # f'{os.getcwd()}\data\wordcloud'
        os.startfile(r'.\data\wordcloud\font')


    def getinf(self):
        self.th = threading.Thread(target=self.gi)
        # 设置线程为守护线程，防止退出主线程时，子线程仍在运行
        self.th.setDaemon(True)
        # 新线程启动
        self.th.start()

    def getinf_2(self):
        self.th = threading.Thread(target=self.gi2)
        # 设置线程为守护线程，防止退出主线程时，子线程仍在运行
        self.th.setDaemon(True)
        # 新线程启动
        self.th.start()

    def gi(self):
        i = 0
        if self.user_idEdit.text() == "" and self.music_table.rowCount() == 0:
            inf = sql.get_musics()
            self.music_table.insertColumn(0)
            self.music_table.setHorizontalHeaderLabels(['用户id', '歌曲id', '歌曲名', '歌手'])
            for item in inf:
                self.music_table.insertRow(i)
                self.music_table.setItem(i, 0, QTableWidgetItem(str(item['user_id'])))
                self.music_table.setItem(i, 1, QTableWidgetItem(str(item['music_id'])))
                self.music_table.setItem(i, 2, QTableWidgetItem(str(item['music_name'])))
                self.music_table.setItem(i, 3, QTableWidgetItem(str(item['nickname'])))
                i += 1
            self.music_table.update()
        else:
            self.clear()
            inf = sql.get_music_table(self.user_idEdit.text())
            for item in inf:
                self.music_table.insertRow(i)
                self.music_table.setItem(i, 0, QTableWidgetItem(str(item['music_id'])))
                self.music_table.setItem(i, 1, QTableWidgetItem(str(item['music_name'])))
                self.music_table.setItem(i, 2, QTableWidgetItem(str(item['nickname'])))
                i += 1
            self.music_table.update()

    def gi2(self):
        i = 0
        if self.user_idEdit.text() == "" and self.music_table_2.rowCount() == 0:
            inf = sql.get_lyrics()
            for item in inf:
                self.music_table_2.insertRow(i)
                self.music_table_2.setItem(i, 0, QTableWidgetItem(str(item['music_id'])))
                self.music_table_2.setItem(i, 1, QTableWidgetItem(str(item['lyric'])))
                i += 1
            self.music_table_2.update()
        else:
            self.clear2()
            inf = sql.get_lyric_table(self.user_idEdit.text())
            for item in inf:
                self.music_table_2.insertRow(i)
                self.music_table_2.setItem(i, 0, QTableWidgetItem(str(item['music_id'])))
                self.music_table_2.setItem(i, 1, QTableWidgetItem(str(item['lyric'])))
                i += 1
            self.music_table_2.update()

    def searchlyr(self):
        if self.music_idEdit.text() != "":
            text = searchLyr(self.music_idEdit.text())
            cursor = self.lyric_Browser.textCursor()
            cursor.movePosition(QtGui.QTextCursor.End)
            cursor.insertText(text)
            self.lyric_Browser.setTextCursor(cursor)
            self.lyric_Browser.ensureCursorVisible()

    def clear(self):
        count = self.music_table.rowCount()
        if self.music_table.columnCount() == 4:
            self.music_table.removeColumn(0)
        for _ in range(count):
            self.music_table.removeRow(0)

    def clear2(self):
        count = self.music_table_2.rowCount()
        for _ in range(count):
            self.music_table_2.removeRow(0)

    def clear3(self):
        self.music_idEdit.setText('')
        self.lyric_Browser.setText('')

    def meBtn(self):
        QtGui.QDesktopServices.openUrl(QtCore.QUrl('https://github.com/Olvi73'))




# 保存日志
class Logger(object):
    def __init__(self, filename="./Default.log"):
        self.terminal = sys.stdout
        self.log = open(filename, "a")

    def write(self, message):
        self.terminal.write(message)
        self.log.write(message)

    def flush(self):
        pass


if __name__ == '__main__':
    # 多线程打包
    multiprocessing.freeze_support()
    path = os.path.abspath(os.path.dirname(__file__))

    # 固定的，PyQt5程序都需要QApplication对象。sys.argv是命令行参数列表，确保程序可以双击运行
    app = QApplication(sys.argv)
    # 初始化
    myWin = MyMainForm()
    # 将窗口控件显示在屏幕上
    myWin.show()

    sys.stdout = Logger('./log.txt')

    # 清空数据库
    # sql.truncate_all()
    # print("清空数据库完成")

    # 程序运行，sys.exit方法确保程序完整退出。
    sys.exit(app.exec_())
