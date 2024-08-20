/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *race_track_img;
    QLabel *white_car_image;
    QLabel *yellow_car_image;
    QPushButton *pushButton_start;
    QPushButton *pushButton_exit;
    QPushButton *pushButton_pause;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(819, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        race_track_img = new QLabel(centralwidget);
        race_track_img->setObjectName(QString::fromUtf8("race_track_img"));
        race_track_img->setGeometry(QRect(10, 130, 861, 321));
        white_car_image = new QLabel(centralwidget);
        white_car_image->setObjectName(QString::fromUtf8("white_car_image"));
        white_car_image->setGeometry(QRect(10, 310, 101, 51));
        yellow_car_image = new QLabel(centralwidget);
        yellow_car_image->setObjectName(QString::fromUtf8("yellow_car_image"));
        yellow_car_image->setGeometry(QRect(20, 220, 91, 51));
        pushButton_start = new QPushButton(centralwidget);
        pushButton_start->setObjectName(QString::fromUtf8("pushButton_start"));
        pushButton_start->setGeometry(QRect(60, 450, 171, 51));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        pushButton_start->setFont(font);
        pushButton_exit = new QPushButton(centralwidget);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(580, 450, 171, 51));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        pushButton_exit->setFont(font1);
        pushButton_pause = new QPushButton(centralwidget);
        pushButton_pause->setObjectName(QString::fromUtf8("pushButton_pause"));
        pushButton_pause->setGeometry(QRect(320, 450, 171, 51));
        pushButton_pause->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 819, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        race_track_img->setText(QString());
        white_car_image->setText(QString());
        yellow_car_image->setText(QString());
        pushButton_start->setText(QApplication::translate("MainWindow", "Start", nullptr));
        pushButton_exit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        pushButton_pause->setText(QApplication::translate("MainWindow", "Pause", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
