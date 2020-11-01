# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'frame2.ui'
#
# Created by: PyQt5 UI code generator 5.9.2
#
# WARNING! All changes made in this file will be lost!


from PyQt5 import QtCore, QtGui, QtWidgets

class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(1225, 828)
        MainWindow.setMinimumSize(QtCore.QSize(996, 668))
        MainWindow.setMaximumSize(QtCore.QSize(16777215, 16777215))
        MainWindow.setStyleSheet("")
        self.centralwidget = QtWidgets.QWidget(MainWindow)
        self.centralwidget.setObjectName("centralwidget")
        self.background = QtWidgets.QLabel(self.centralwidget)
        self.background.setGeometry(QtCore.QRect(-10, -20, 1251, 871))
        self.background.setStyleSheet("")
        self.background.setText("")
        self.background.setPixmap(QtGui.QPixmap(":/icon/icon/bg.png"))
        self.background.setScaledContents(True)
        self.background.setObjectName("background")
        self.min_Button = QtWidgets.QPushButton(self.centralwidget)
        self.min_Button.setGeometry(QtCore.QRect(1040, 70, 25, 25))
        self.min_Button.setStyleSheet("QPushButton{\n"
"    font: 11pt \"微软雅黑\";\n"
"    background:#6C6C6C;\n"
"    color:white;\n"
"    box-shadow: 1px 1px 3px rgba(0,0,0,0.3);font-size:    24px;\n"
"    border-radius: 12px;\n"
"    font-family: 微软雅黑;\n"
"}\n"
"QPushButton:hover{                    \n"
"    background:#9D9D9D;\n"
"}\n"
"QPushButton:pressed{\n"
"    border: 1px solid #3C3C3C!important;\n"
"}")
        self.min_Button.setText("")
        self.min_Button.setObjectName("min_Button")
        self.close_Button = QtWidgets.QPushButton(self.centralwidget)
        self.close_Button.setGeometry(QtCore.QRect(1090, 70, 25, 25))
        self.close_Button.setStyleSheet("QPushButton{\n"
"    background:#CE0000;\n"
"    color:white;\n"
"    box-shadow: 1px 1px 3px rgba(0,0,0,0.3);font-size:14px;border-radius: 12px;font-family: 微软雅黑;\n"
"}\n"
"QPushButton:hover{                    \n"
"    background:#FF2D2D;\n"
"}\n"
"QPushButton:pressed{\n"
"    border: 1px solid #3C3C3C!important;\n"
"    background:#AE0000;\n"
"}")
        self.close_Button.setText("")
        self.close_Button.setObjectName("close_Button")
        self.tabWidget = QtWidgets.QTabWidget(self.centralwidget)
        self.tabWidget.setGeometry(QtCore.QRect(70, 170, 1091, 601))
        font = QtGui.QFont()
        font.setFamily("微软雅黑")
        font.setPointSize(13)
        self.tabWidget.setFont(font)
        self.tabWidget.setStyleSheet("QTabBar::tab{width:100}\n"
"\n"
"QTabBar::tab{height:50}\n"
"")
        self.tabWidget.setObjectName("tabWidget")
        self.tab = QtWidgets.QWidget()
        self.tab.setObjectName("tab")
        self.textBrowser = QtWidgets.QTextBrowser(self.tab)
        self.textBrowser.setGeometry(QtCore.QRect(30, 100, 1021, 421))
        self.textBrowser.setStyleSheet("color:rgba(89,88,102,0.8);\n"
"font: 11pt \"微软雅黑\";\n"
"border-radius:5px;\n"
"background-color: rgb(195, 196, 201);\n"
"border: 2px solid rgb(43, 43, 43, 255);")
        self.textBrowser.setObjectName("textBrowser")
        self.console_label = QtWidgets.QLabel(self.tab)
        self.console_label.setGeometry(QtCore.QRect(20, 50, 101, 16))
        self.console_label.setStyleSheet("font: 9pt \"微软雅黑\";")
        self.console_label.setObjectName("console_label")
        self.lyricSpider_Button = QtWidgets.QPushButton(self.tab)
        self.lyricSpider_Button.setGeometry(QtCore.QRect(490, 20, 121, 41))
        self.lyricSpider_Button.setStyleSheet("QPushButton{\n"
"background:#FFF0F5;\n"
"color:#a05e7a;\n"
"box-shadow: 1px 1px 3px rgba(0, 0, 0,0.3);font-size:16px;border-radius: 14px;font-family: 微软雅黑;\n"
"}\n"
"QPushButton:hover{\n"
"background:#fff6f9;\n"
"}\n"
"QPushButton:pressed{\n"
"border: 1px solid     #FFC0CB!important;\n"
"}\n"
"")
        self.lyricSpider_Button.setObjectName("lyricSpider_Button")
        self.musicSpider_Button = QtWidgets.QPushButton(self.tab)
        self.musicSpider_Button.setGeometry(QtCore.QRect(290, 20, 121, 41))
        self.musicSpider_Button.setStyleSheet("QPushButton{\n"
"background:#FFF0F5;\n"
"color:#a05e7a;\n"
"box-shadow: 1px 1px 3px rgba(0, 0, 0,0.3);font-size:16px;border-radius: 14px;font-family: 微软雅黑;\n"
"}\n"
"QPushButton:hover{\n"
"background:#fff6f9;\n"
"}\n"
"QPushButton:pressed{\n"
"border: 1px solid     #FFC0CB!important;\n"
"}\n"
"")
        self.musicSpider_Button.setAutoRepeat(False)
        self.musicSpider_Button.setAutoExclusive(False)
        self.musicSpider_Button.setObjectName("musicSpider_Button")
        self.tabWidget.addTab(self.tab, "")
        self.tab_2 = QtWidgets.QWidget()
        self.tab_2.setObjectName("tab_2")
        self.cloud_label = QtWidgets.QLabel(self.tab_2)
        self.cloud_label.setGeometry(QtCore.QRect(30, 100, 1021, 421))
        self.cloud_label.setStyleSheet("color:rgba(89,88,102,0.8);\n"
"font: 11pt \"微软雅黑\";\n"
"border-radius:5px;\n"
"background-color: rgb(195, 196, 201);\n"
"border: 2px solid rgb(43, 43, 43, 255);")
        self.cloud_label.setText("")
        self.cloud_label.setObjectName("cloud_label")
        self.console_label_2 = QtWidgets.QLabel(self.tab_2)
        self.console_label_2.setGeometry(QtCore.QRect(20, 60, 101, 16))
        self.console_label_2.setStyleSheet("font: 9pt \"微软雅黑\";")
        self.console_label_2.setObjectName("console_label_2")
        self.cloudLyric_Button = QtWidgets.QPushButton(self.tab_2)
        self.cloudLyric_Button.setGeometry(QtCore.QRect(290, 20, 121, 41))
        self.cloudLyric_Button.setStyleSheet("QPushButton{\n"
"background:#FAEBD7;\n"
"color:#da7e4f;\n"
"box-shadow: 1px 1px 3px rgba(0,0,0,0.3);font-size:16px;border-radius: 14px;font-family: 微软雅黑;\n"
"}\n"
"QPushButton:hover{\n"
"background:    #f1e5d5;\n"
"}\n"
"QPushButton:pressed{\n"
"border: 1px solid     #DEB887!important;\n"
"}\n"
"")
        self.cloudLyric_Button.setObjectName("cloudLyric_Button")
        self.cloudArtist_Button = QtWidgets.QPushButton(self.tab_2)
        self.cloudArtist_Button.setGeometry(QtCore.QRect(490, 20, 121, 41))
        self.cloudArtist_Button.setStyleSheet("QPushButton{\n"
"background:#FAEBD7;\n"
"color:#da7e4f;\n"
"box-shadow: 1px 1px 3px rgba(0,0,0,0.3);font-size:16px;border-radius: 14px;font-family: 微软雅黑;\n"
"}\n"
"QPushButton:hover{\n"
"background:    #f1e5d5;\n"
"}\n"
"QPushButton:pressed{\n"
"border: 1px solid     #DEB887!important;\n"
"}\n"
"")
        self.cloudArtist_Button.setObjectName("cloudArtist_Button")
        self.file_Button = QtWidgets.QPushButton(self.tab_2)
        self.file_Button.setGeometry(QtCore.QRect(790, 20, 181, 51))
        self.file_Button.setStyleSheet("QPushButton{\n"
"background:#6C6C6C;\n"
"color:white;\n"
"box-shadow: 1px 1px 3px rgba(0,0,0,0.3);font-size:16px;border-radius: 14px;font-family: 微软雅黑;\n"
"}\n"
"QPushButton:hover{\n"
"background:#9D9D9D;\n"
"}\n"
"QPushButton:pressed{\n"
"border: 1px solid #3C3C3C!important;\n"
"}\n"
"")
        self.file_Button.setObjectName("file_Button")
        self.tabWidget.addTab(self.tab_2, "")
        self.tab_3 = QtWidgets.QWidget()
        self.tab_3.setObjectName("tab_3")
        self.music_table = QtWidgets.QTableWidget(self.tab_3)
        self.music_table.setGeometry(QtCore.QRect(30, 60, 1011, 451))
        self.music_table.setObjectName("music_table")
        self.music_table.setColumnCount(3)
        self.music_table.setRowCount(0)
        item = QtWidgets.QTableWidgetItem()
        font = QtGui.QFont()
        font.setFamily("微软雅黑")
        font.setPointSize(12)
        item.setFont(font)
        self.music_table.setHorizontalHeaderItem(0, item)
        item = QtWidgets.QTableWidgetItem()
        font = QtGui.QFont()
        font.setFamily("微软雅黑")
        font.setPointSize(12)
        item.setFont(font)
        self.music_table.setHorizontalHeaderItem(1, item)
        item = QtWidgets.QTableWidgetItem()
        font = QtGui.QFont()
        font.setFamily("微软雅黑")
        font.setPointSize(12)
        item.setFont(font)
        self.music_table.setHorizontalHeaderItem(2, item)
        self.tableinf_Button = QtWidgets.QPushButton(self.tab_3)
        self.tableinf_Button.setGeometry(QtCore.QRect(400, 10, 121, 41))
        self.tableinf_Button.setStyleSheet("QPushButton{\n"
"background:#6C6C6C;\n"
"color:white;\n"
"box-shadow: 1px 1px 3px rgba(0,0,0,0.3);font-size:16px;border-radius: 14px;font-family: 微软雅黑;\n"
"}\n"
"QPushButton:hover{\n"
"background:#9D9D9D;\n"
"}\n"
"QPushButton:pressed{\n"
"border: 1px solid #3C3C3C!important;\n"
"}\n"
"")
        self.tableinf_Button.setObjectName("tableinf_Button")
        self.clear_Button = QtWidgets.QPushButton(self.tab_3)
        self.clear_Button.setGeometry(QtCore.QRect(590, 10, 121, 41))
        self.clear_Button.setStyleSheet("QPushButton{\n"
"background:#6C6C6C;\n"
"color:white;\n"
"box-shadow: 1px 1px 3px rgba(0,0,0,0.3);font-size:16px;border-radius: 14px;font-family: 微软雅黑;\n"
"}\n"
"QPushButton:hover{\n"
"background:#9D9D9D;\n"
"}\n"
"QPushButton:pressed{\n"
"border: 1px solid #3C3C3C!important;\n"
"}\n"
"")
        self.clear_Button.setObjectName("clear_Button")
        self.tabWidget.addTab(self.tab_3, "")
        self.tab_4 = QtWidgets.QWidget()
        self.tab_4.setObjectName("tab_4")
        self.tableinf_Button_2 = QtWidgets.QPushButton(self.tab_4)
        self.tableinf_Button_2.setGeometry(QtCore.QRect(400, 10, 121, 41))
        self.tableinf_Button_2.setStyleSheet("QPushButton{\n"
"background:#6C6C6C;\n"
"color:white;\n"
"box-shadow: 1px 1px 3px rgba(0,0,0,0.3);font-size:16px;border-radius: 14px;font-family: 微软雅黑;\n"
"}\n"
"QPushButton:hover{\n"
"background:#9D9D9D;\n"
"}\n"
"QPushButton:pressed{\n"
"border: 1px solid #3C3C3C!important;\n"
"}\n"
"")
        self.tableinf_Button_2.setObjectName("tableinf_Button_2")
        self.music_table_2 = QtWidgets.QTableWidget(self.tab_4)
        self.music_table_2.setGeometry(QtCore.QRect(40, 60, 1011, 451))
        font = QtGui.QFont()
        font.setFamily("微软雅黑")
        font.setPointSize(13)
        self.music_table_2.setFont(font)
        self.music_table_2.setObjectName("music_table_2")
        self.music_table_2.setColumnCount(2)
        self.music_table_2.setRowCount(0)
        item = QtWidgets.QTableWidgetItem()
        font = QtGui.QFont()
        font.setFamily("微软雅黑")
        font.setPointSize(12)
        item.setFont(font)
        self.music_table_2.setHorizontalHeaderItem(0, item)
        item = QtWidgets.QTableWidgetItem()
        font = QtGui.QFont()
        font.setFamily("微软雅黑")
        font.setPointSize(12)
        item.setFont(font)
        self.music_table_2.setHorizontalHeaderItem(1, item)
        self.clear_Button_2 = QtWidgets.QPushButton(self.tab_4)
        self.clear_Button_2.setGeometry(QtCore.QRect(590, 10, 121, 41))
        self.clear_Button_2.setStyleSheet("QPushButton{\n"
"background:#6C6C6C;\n"
"color:white;\n"
"box-shadow: 1px 1px 3px rgba(0,0,0,0.3);font-size:16px;border-radius: 14px;font-family: 微软雅黑;\n"
"}\n"
"QPushButton:hover{\n"
"background:#9D9D9D;\n"
"}\n"
"QPushButton:pressed{\n"
"border: 1px solid #3C3C3C!important;\n"
"}\n"
"")
        self.clear_Button_2.setObjectName("clear_Button_2")
        self.tabWidget.addTab(self.tab_4, "")
        self.tab_5 = QtWidgets.QWidget()
        self.tab_5.setObjectName("tab_5")
        self.label_2 = QtWidgets.QLabel(self.tab_5)
        self.label_2.setGeometry(QtCore.QRect(290, 10, 241, 71))
        self.label_2.setStyleSheet("")
        self.label_2.setText("")
        self.label_2.setPixmap(QtGui.QPixmap(":/icon/icon/tabitem-hover.png"))
        self.label_2.setScaledContents(True)
        self.label_2.setObjectName("label_2")
        self.music_label = QtWidgets.QLabel(self.tab_5)
        self.music_label.setGeometry(QtCore.QRect(210, 30, 81, 41))
        self.music_label.setStyleSheet("font: 13pt \"微软雅黑\";\n"
"border: none;\n"
"background-color: none;")
        self.music_label.setObjectName("music_label")
        self.music_idEdit = QtWidgets.QLineEdit(self.tab_5)
        self.music_idEdit.setGeometry(QtCore.QRect(320, 30, 181, 41))
        self.music_idEdit.setStyleSheet("font: 15pt \"微软雅黑\";\n"
"border:none;\n"
"\n"
"")
        self.music_idEdit.setText("")
        self.music_idEdit.setObjectName("music_idEdit")
        self.lyric_Browser = QtWidgets.QTextBrowser(self.tab_5)
        self.lyric_Browser.setGeometry(QtCore.QRect(30, 100, 1021, 421))
        self.lyric_Browser.setStyleSheet("color:rgba(89,88,102,0.8);\n"
"font: 11pt \"微软雅黑\";\n"
"border-radius:5px;\n"
"background-color: rgb(195, 196, 201);\n"
"border: 2px solid rgb(43, 43, 43, 255);")
        self.lyric_Browser.setObjectName("lyric_Browser")
        self.search_lyric = QtWidgets.QPushButton(self.tab_5)
        self.search_lyric.setGeometry(QtCore.QRect(620, 20, 131, 51))
        self.search_lyric.setStyleSheet("QPushButton{\n"
"background:#6C6C6C;\n"
"color:white;\n"
"box-shadow: 1px 1px 3px rgba(0,0,0,0.3);font-size:16px;border-radius: 14px;font-family: 微软雅黑;\n"
"}\n"
"QPushButton:hover{\n"
"background:#9D9D9D;\n"
"}\n"
"QPushButton:pressed{\n"
"border: 1px solid #3C3C3C!important;\n"
"}\n"
"")
        self.search_lyric.setObjectName("search_lyric")
        self.clear_Button_3 = QtWidgets.QPushButton(self.tab_5)
        self.clear_Button_3.setGeometry(QtCore.QRect(800, 20, 121, 51))
        self.clear_Button_3.setStyleSheet("QPushButton{\n"
"background:#6C6C6C;\n"
"color:white;\n"
"box-shadow: 1px 1px 3px rgba(0,0,0,0.3);font-size:16px;border-radius: 14px;font-family: 微软雅黑;\n"
"}\n"
"QPushButton:hover{\n"
"background:#9D9D9D;\n"
"}\n"
"QPushButton:pressed{\n"
"border: 1px solid #3C3C3C!important;\n"
"}\n"
"")
        self.clear_Button_3.setObjectName("clear_Button_3")
        self.tabWidget.addTab(self.tab_5, "")
        self.me_label = QtWidgets.QLabel(self.centralwidget)
        self.me_label.setGeometry(QtCore.QRect(90, 80, 131, 71))
        self.me_label.setText("")
        self.me_label.setPixmap(QtGui.QPixmap(":/icon/icon/me.png"))
        self.me_label.setScaledContents(True)
        self.me_label.setObjectName("me_label")
        self.label = QtWidgets.QLabel(self.centralwidget)
        self.label.setGeometry(QtCore.QRect(520, 90, 241, 71))
        self.label.setStyleSheet("")
        self.label.setText("")
        self.label.setPixmap(QtGui.QPixmap(":/icon/icon/tabitem-hover.png"))
        self.label.setScaledContents(True)
        self.label.setObjectName("label")
        self.user_label = QtWidgets.QLabel(self.centralwidget)
        self.user_label.setGeometry(QtCore.QRect(440, 110, 81, 41))
        self.user_label.setStyleSheet("font: 13pt \"微软雅黑\";\n"
"border: none;\n"
"background-color: none;")
        self.user_label.setObjectName("user_label")
        self.user_idEdit = QtWidgets.QLineEdit(self.centralwidget)
        self.user_idEdit.setGeometry(QtCore.QRect(550, 110, 181, 41))
        self.user_idEdit.setStyleSheet("font: 15pt \"微软雅黑\";\n"
"border:none;\n"
"\n"
"")
        self.user_idEdit.setText("")
        self.user_idEdit.setObjectName("user_idEdit")
        MainWindow.setCentralWidget(self.centralwidget)

        self.retranslateUi(MainWindow)
        self.tabWidget.setCurrentIndex(0)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)
        MainWindow.setTabOrder(self.user_idEdit, self.musicSpider_Button)
        MainWindow.setTabOrder(self.musicSpider_Button, self.lyricSpider_Button)
        MainWindow.setTabOrder(self.lyricSpider_Button, self.cloudLyric_Button)

    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        MainWindow.setWindowTitle(_translate("MainWindow", "MainWindow"))
        self.textBrowser.setHtml(_translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:\'微软雅黑\'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>"))
        self.console_label.setText(_translate("MainWindow", "控制台输出："))
        self.lyricSpider_Button.setText(_translate("MainWindow", "歌词"))
        self.musicSpider_Button.setText(_translate("MainWindow", "歌曲"))
        self.tabWidget.setTabText(self.tabWidget.indexOf(self.tab), _translate("MainWindow", "获取"))
        self.console_label_2.setText(_translate("MainWindow", "词云输出："))
        self.cloudLyric_Button.setText(_translate("MainWindow", "歌词"))
        self.cloudArtist_Button.setText(_translate("MainWindow", "歌手"))
        self.file_Button.setText(_translate("MainWindow", "打开输出文件夹"))
        self.tabWidget.setTabText(self.tabWidget.indexOf(self.tab_2), _translate("MainWindow", "词云"))
        item = self.music_table.horizontalHeaderItem(0)
        item.setText(_translate("MainWindow", "歌曲id"))
        item = self.music_table.horizontalHeaderItem(1)
        item.setText(_translate("MainWindow", "歌曲名"))
        item = self.music_table.horizontalHeaderItem(2)
        item.setText(_translate("MainWindow", "歌手"))
        self.tableinf_Button.setText(_translate("MainWindow", "读取"))
        self.clear_Button.setText(_translate("MainWindow", "清除"))
        self.tabWidget.setTabText(self.tabWidget.indexOf(self.tab_3), _translate("MainWindow", "music"))
        self.tableinf_Button_2.setText(_translate("MainWindow", "读取"))
        item = self.music_table_2.horizontalHeaderItem(0)
        item.setText(_translate("MainWindow", "歌曲id"))
        item = self.music_table_2.horizontalHeaderItem(1)
        item.setText(_translate("MainWindow", "歌词"))
        self.clear_Button_2.setText(_translate("MainWindow", "清除"))
        self.tabWidget.setTabText(self.tabWidget.indexOf(self.tab_4), _translate("MainWindow", "lyric"))
        self.music_label.setText(_translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">歌曲id：</span></p></body></html>"))
        self.lyric_Browser.setHtml(_translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:\'微软雅黑\'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>"))
        self.search_lyric.setText(_translate("MainWindow", "搜索"))
        self.clear_Button_3.setText(_translate("MainWindow", "清除"))
        self.tabWidget.setTabText(self.tabWidget.indexOf(self.tab_5), _translate("MainWindow", "search"))
        self.user_label.setText(_translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">用户uid：</span></p></body></html>"))

import icon_rc
