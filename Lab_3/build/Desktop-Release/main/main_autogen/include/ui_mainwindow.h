/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QPushButton *bt_info;
    QPushButton *bt_trace;
    QPushButton *bt_debug;
    QLineEdit *val_x;
    QPushButton *pushButton;
    QLineEdit *val_y;
    QPushButton *pushButton_2;
    QPushButton *bt_div;
    QLabel *result;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setAcceptDrops(true);
        MainWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        bt_info = new QPushButton(centralwidget);
        bt_info->setObjectName("bt_info");
        bt_info->setGeometry(QRect(90, 200, 161, 91));
        bt_trace = new QPushButton(centralwidget);
        bt_trace->setObjectName("bt_trace");
        bt_trace->setGeometry(QRect(90, 100, 161, 91));
        bt_debug = new QPushButton(centralwidget);
        bt_debug->setObjectName("bt_debug");
        bt_debug->setGeometry(QRect(280, 100, 161, 91));
        val_x = new QLineEdit(centralwidget);
        val_x->setObjectName("val_x");
        val_x->setGeometry(QRect(90, 430, 113, 24));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(60, 430, 31, 24));
        val_y = new QLineEdit(centralwidget);
        val_y->setObjectName("val_y");
        val_y->setGeometry(QRect(270, 430, 113, 24));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(240, 430, 31, 24));
        bt_div = new QPushButton(centralwidget);
        bt_div->setObjectName("bt_div");
        bt_div->setGeometry(QRect(440, 430, 51, 24));
        result = new QLabel(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(490, 430, 181, 21));
        result->setAutoFillBackground(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        bt_info->setText(QCoreApplication::translate("MainWindow", "Info", nullptr));
        bt_trace->setText(QCoreApplication::translate("MainWindow", "Trace", nullptr));
        bt_debug->setText(QCoreApplication::translate("MainWindow", "Debug", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "x =", nullptr));
        val_y->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "y =", nullptr));
        bt_div->setText(QCoreApplication::translate("MainWindow", "x / y =", nullptr));
        result->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
