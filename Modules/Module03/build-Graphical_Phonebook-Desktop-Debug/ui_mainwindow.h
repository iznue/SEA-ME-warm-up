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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
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
    QFrame *frame;
    QLabel *label_9;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEdit_search;
    QPushButton *search_button;
    QFrame *ADD;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_add_phone;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_add_email;
    QPushButton *add_button;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_add_name;
    QLabel *label;
    QLabel *label_5;
    QFrame *frame_2;
    QLabel *label_7;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_remove;
    QPushButton *remove_button;
    QLabel *label_6;
    QListWidget *contact_list_view;
    QLabel *label_8;
    QPushButton *save_button;
    QPushButton *load_button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(804, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(430, 439, 341, 81));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 10, 251, 20));
        widget = new QWidget(frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 40, 321, 27));
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        lineEdit_search = new QLineEdit(widget);
        lineEdit_search->setObjectName(QString::fromUtf8("lineEdit_search"));

        horizontalLayout_5->addWidget(lineEdit_search);

        search_button = new QPushButton(widget);
        search_button->setObjectName(QString::fromUtf8("search_button"));

        horizontalLayout_5->addWidget(search_button);

        ADD = new QFrame(centralwidget);
        ADD->setObjectName(QString::fromUtf8("ADD"));
        ADD->setGeometry(QRect(430, 80, 341, 171));
        ADD->setFrameShape(QFrame::StyledPanel);
        ADD->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(ADD);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 50, 301, 27));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_add_phone = new QLineEdit(layoutWidget);
        lineEdit_add_phone->setObjectName(QString::fromUtf8("lineEdit_add_phone"));

        horizontalLayout_3->addWidget(lineEdit_add_phone);

        layoutWidget_2 = new QWidget(ADD);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 90, 301, 27));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_add_email = new QLineEdit(layoutWidget_2);
        lineEdit_add_email->setObjectName(QString::fromUtf8("lineEdit_add_email"));

        horizontalLayout_4->addWidget(lineEdit_add_email);

        add_button = new QPushButton(ADD);
        add_button->setObjectName(QString::fromUtf8("add_button"));
        add_button->setGeometry(QRect(230, 130, 89, 25));
        widget1 = new QWidget(ADD);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(20, 10, 301, 27));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_add_name = new QLineEdit(widget1);
        lineEdit_add_name->setObjectName(QString::fromUtf8("lineEdit_add_name"));

        horizontalLayout_2->addWidget(lineEdit_add_name);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 91, 31));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(430, 60, 121, 17));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(430, 310, 341, 71));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 10, 311, 17));
        widget2 = new QWidget(frame_2);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(10, 30, 321, 27));
        horizontalLayout = new QHBoxLayout(widget2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_remove = new QLineEdit(widget2);
        lineEdit_remove->setObjectName(QString::fromUtf8("lineEdit_remove"));

        horizontalLayout->addWidget(lineEdit_remove);

        remove_button = new QPushButton(widget2);
        remove_button->setObjectName(QString::fromUtf8("remove_button"));

        horizontalLayout->addWidget(remove_button);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(430, 290, 121, 17));
        contact_list_view = new QListWidget(centralwidget);
        contact_list_view->setObjectName(QString::fromUtf8("contact_list_view"));
        contact_list_view->setGeometry(QRect(40, 60, 361, 461));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        contact_list_view->setFont(font);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(430, 420, 111, 17));
        save_button = new QPushButton(centralwidget);
        save_button->setObjectName(QString::fromUtf8("save_button"));
        save_button->setGeometry(QRect(580, 20, 89, 25));
        load_button = new QPushButton(centralwidget);
        load_button->setObjectName(QString::fromUtf8("load_button"));
        load_button->setGeometry(QRect(680, 20, 89, 25));
        MainWindow->setCentralWidget(centralwidget);
        frame_2->raise();
        frame->raise();
        ADD->raise();
        label->raise();
        label_5->raise();
        label_6->raise();
        contact_list_view->raise();
        label_8->raise();
        save_button->raise();
        load_button->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 804, 22));
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
        label_9->setText(QApplication::translate("MainWindow", "Enter the 'name' to view contact", nullptr));
        search_button->setText(QApplication::translate("MainWindow", "Search", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Phone number", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "email", nullptr));
        add_button->setText(QApplication::translate("MainWindow", "Add", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Name", nullptr));
        label->setText(QApplication::translate("MainWindow", "Phone Book", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Add Contact", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Enter the 'phone_number' to remove contact", nullptr));
        remove_button->setText(QApplication::translate("MainWindow", "Remove", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Remove Contact", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Search Contact", nullptr));
        save_button->setText(QApplication::translate("MainWindow", "Save_File", nullptr));
        load_button->setText(QApplication::translate("MainWindow", "Load_File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
