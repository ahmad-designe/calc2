/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *firstnum;
    QLineEdit *secondnum;
    QLineEdit *result;
    QPushButton *add;
    QPushButton *sub;
    QPushButton *multiply;
    QPushButton *devide;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(243, 126);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        firstnum = new QLineEdit(centralwidget);
        firstnum->setObjectName("firstnum");
        firstnum->setGeometry(QRect(12, 10, 101, 24));
        secondnum = new QLineEdit(centralwidget);
        secondnum->setObjectName("secondnum");
        secondnum->setGeometry(QRect(12, 50, 101, 24));
        result = new QLineEdit(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(10, 90, 221, 24));
        result->setReadOnly(true);
        add = new QPushButton(centralwidget);
        add->setObjectName("add");
        add->setGeometry(QRect(130, 10, 41, 31));
        sub = new QPushButton(centralwidget);
        sub->setObjectName("sub");
        sub->setGeometry(QRect(190, 10, 41, 31));
        multiply = new QPushButton(centralwidget);
        multiply->setObjectName("multiply");
        multiply->setGeometry(QRect(130, 50, 41, 31));
        devide = new QPushButton(centralwidget);
        devide->setObjectName("devide");
        devide->setGeometry(QRect(190, 50, 41, 31));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        multiply->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        devide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
