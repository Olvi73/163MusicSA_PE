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
        MainWindow.resize(965, 493)
        self.centralwidget = QtWidgets.QWidget(MainWindow)
        self.centralwidget.setObjectName("centralwidget")
        self.lyricSpider_Button = QtWidgets.QPushButton(self.centralwidget)
        self.lyricSpider_Button.setGeometry(QtCore.QRect(485, 190, 91, 41))
        self.lyricSpider_Button.setStyleSheet("font: 13pt \"微软雅黑\";")
        self.lyricSpider_Button.setObjectName("lyricSpider_Button")
        self.cloudLyric_Button = QtWidgets.QPushButton(self.centralwidget)
        self.cloudLyric_Button.setGeometry(QtCore.QRect(610, 190, 101, 41))
        self.cloudLyric_Button.setStyleSheet("font: 13pt \"微软雅黑\";")
        self.cloudLyric_Button.setObjectName("cloudLyric_Button")
        self.musicSpider_Button = QtWidgets.QPushButton(self.centralwidget)
        self.musicSpider_Button.setGeometry(QtCore.QRect(355, 190, 101, 41))
        self.musicSpider_Button.setStyleSheet("font: 13pt \"微软雅黑\";")
        self.musicSpider_Button.setAutoRepeat(False)
        self.musicSpider_Button.setAutoExclusive(False)
        self.musicSpider_Button.setObjectName("musicSpider_Button")
        self.user_idEdit = QtWidgets.QLineEdit(self.centralwidget)
        self.user_idEdit.setGeometry(QtCore.QRect(200, 190, 121, 31))
        self.user_idEdit.setStyleSheet("background-color: rgba(255, 255, 255, 100);")
        self.user_idEdit.setObjectName("user_idEdit")
        self.user_label = QtWidgets.QLabel(self.centralwidget)
        self.user_label.setGeometry(QtCore.QRect(65, 190, 141, 41))
        self.user_label.setStyleSheet("font: 13pt \"微软雅黑\";")
        self.user_label.setObjectName("user_label")
        self.cloudArtist_Button = QtWidgets.QPushButton(self.centralwidget)
        self.cloudArtist_Button.setGeometry(QtCore.QRect(745, 190, 101, 41))
        self.cloudArtist_Button.setStyleSheet("font: 13pt \"微软雅黑\";")
        self.cloudArtist_Button.setObjectName("cloudArtist_Button")
        self.textBrowser = QtWidgets.QTextBrowser(self.centralwidget)
        self.textBrowser.setGeometry(QtCore.QRect(70, 270, 351, 191))
        self.textBrowser.setStyleSheet("background-color: rgba(255, 255, 255, 100);")
        self.textBrowser.setObjectName("textBrowser")
        self.tittle_label = QtWidgets.QLabel(self.centralwidget)
        self.tittle_label.setGeometry(QtCore.QRect(0, 0, 1031, 141))
        self.tittle_label.setStyleSheet("background-image: url(:/icon/icon/bg.jpg);")
        self.tittle_label.setText("")
        self.tittle_label.setObjectName("tittle_label")
        self.cloud_label = QtWidgets.QLabel(self.centralwidget)
        self.cloud_label.setGeometry(QtCore.QRect(480, 260, 421, 201))
        self.cloud_label.setStyleSheet("border-radius:5px;\n"
"background-color: rgb(255, 255, 255);\n"
"border: 2px solid rgb(205, 92, 92, 255);")
        self.cloud_label.setText("")
        self.cloud_label.setObjectName("cloud_label")
        self.label = QtWidgets.QLabel(self.centralwidget)
        self.label.setGeometry(QtCore.QRect(70, 250, 101, 16))
        self.label.setStyleSheet("font: 9pt \"微软雅黑\";")
        self.label.setObjectName("label")
        self.lyricSpider_Button.raise_()
        self.cloudLyric_Button.raise_()
        self.user_idEdit.raise_()
        self.user_label.raise_()
        self.musicSpider_Button.raise_()
        self.cloudArtist_Button.raise_()
        self.textBrowser.raise_()
        self.tittle_label.raise_()
        self.cloud_label.raise_()
        self.label.raise_()
        MainWindow.setCentralWidget(self.centralwidget)
        self.statusbar = QtWidgets.QStatusBar(MainWindow)
        self.statusbar.setObjectName("statusbar")
        MainWindow.setStatusBar(self.statusbar)

        self.retranslateUi(MainWindow)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)
        MainWindow.setTabOrder(self.user_idEdit, self.musicSpider_Button)
        MainWindow.setTabOrder(self.musicSpider_Button, self.lyricSpider_Button)
        MainWindow.setTabOrder(self.lyricSpider_Button, self.cloudLyric_Button)

    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        MainWindow.setWindowTitle(_translate("MainWindow", "MainWindow"))
        self.lyricSpider_Button.setText(_translate("MainWindow", "歌词"))
        self.cloudLyric_Button.setText(_translate("MainWindow", "歌词词云"))
        self.musicSpider_Button.setText(_translate("MainWindow", "歌曲"))
        self.user_label.setText(_translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">输入用户uid：</span></p></body></html>"))
        self.cloudArtist_Button.setText(_translate("MainWindow", "歌手词云"))
        self.textBrowser.setHtml(_translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:\'SimSun\'; font-size:9.07563pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9.07563pt;\"><br /></p></body></html>"))
        self.label.setText(_translate("MainWindow", "控制台输出："))

import icon_rc
