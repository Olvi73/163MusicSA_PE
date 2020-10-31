import datetime
import sys
import os
import threading

from ui import Ui_MainWindow
from PyQt5.QtWidgets import QApplication, QMainWindow
from PyQt5 import QtCore, QtGui
from PyQt5.QtCore import QEventLoop, QTimer
from PyQt5.QtGui import QIcon, QPixmap

import src.sql_sqlite as sql
from src.lyric_by_music import lyricSpider
from src.music_by_songsall import musicSpider
from src.word_cloud_by_artist import cloudArtist
from src.word_cloud_by_lyric import cloudLyric
from src.lto import analysis

# pyuic5 -o *.py *.ui
# pyrcc5 -o icon_rc.py icon.qrc

class EmittingStr(QtCore.QObject):
    textWritten = QtCore.pyqtSignal(str)  # 定义一个发送str的信号

    def write(self, text):
        self.textWritten.emit(str(text))
        loop = QEventLoop()
        QTimer.singleShot(100, loop.quit)
        loop.exec_()


class MyMainForm(QMainWindow, Ui_MainWindow):
    def __init__(self, parent=None):
        super(MyMainForm, self).__init__(parent)
        self.setupUi(self)
        self.setWindowTitle('163MusicSA')
        self.setWindowIcon(QIcon(r'icon/icon.png'))
        QApplication.setStyle('Fusion')
        self.th = None
        self.musicSpider_Button.clicked.connect(self.musicSpider)
        self.lyricSpider_Button.clicked.connect(self.lyricSpider)
        self.cloudLyric_Button.clicked.connect(self.cloudLyric)
        self.cloudArtist_Button.clicked.connect(self.cloudArtist)
        sys.stdout = EmittingStr(textWritten=self.outputWritten)
        sys.stderr = EmittingStr(textWritten=self.outputWritten)

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
        # print("开始爬取音乐")
        # startTime = datetime.datetime.now()
        # print(startTime.strftime('%Y-%m-%d %H:%M:%S'))
        musicSpider(self.user_idEdit.text())
        # endTime = datetime.datetime.now()
        # print(endTime.strftime('%Y-%m-%d %H:%M:%S'))
        # print("耗时：", (endTime - startTime).seconds, "秒")

    def lyricSpider(self):
        lyricSpider(self.user_idEdit.text())

    def cloudLyric(self):
        # 利用line Edit控件对象text()函数获取界面输入
        cloudLyric(self.user_idEdit.text())
        pix = QPixmap(r'wordcloud/' + self.user_idEdit.text() + '_lyricCloud.png')
        self.cloud_label.setPixmap(pix)
        self.cloud_label.setScaledContents(True)  # 自适应QLabel大小

    def cloudArtist(self):
        # 利用line Edit控件对象text()函数获取界面输入
        # cloudArtist(self.user_idEdit.text())
        pix = QPixmap(r'wordcloud/'+self.user_idEdit.text() + '_artistCloud.png')
        self.cloud_label.setPixmap(pix)
        self.cloud_label.setScaledContents(True)  # 自适应QLabel大小


# 保存日志
class Logger(object):
    def __init__(self, filename="Default.log"):
        self.terminal = sys.stdout
        self.log = open(filename, "a")

    def write(self, message):
        self.terminal.write(message)
        self.log.write(message)

    def flush(self):
        pass


if __name__ == '__main__':
    path = os.path.abspath(os.path.dirname(__file__))
    # type = sys.getfilesystemencoding()

    # 固定的，PyQt5程序都需要QApplication对象。sys.argv是命令行参数列表，确保程序可以双击运行
    app = QApplication(sys.argv)
    # 初始化
    myWin = MyMainForm()
    # 将窗口控件显示在屏幕上
    myWin.show()

    sys.stdout = Logger('log.txt')

    # 清空数据库
    # sql.truncate_all()
    # print("清空数据库完成")

    # 程序运行，sys.exit方法确保程序完整退出。
    sys.exit(app.exec_())
