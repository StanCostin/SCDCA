/********************************************************************************
** Form generated from reading UI file 'QtClient.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTCLIENT_H
#define UI_QTCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtClientClass
{
public:
    QWidget *centralWidget;
    QPushButton *login_button;
    QLineEdit *username;
    QLineEdit *password;
    QLabel *label;
    QLabel *label_2;
    QLabel *picture;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtClientClass)
    {
        if (QtClientClass->objectName().isEmpty())
            QtClientClass->setObjectName(QString::fromUtf8("QtClientClass"));
        QtClientClass->resize(1011, 799);
        QFont font;
        font.setFamily(QString::fromUtf8("Yu Gothic UI Semibold"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        QtClientClass->setFont(font);
        centralWidget = new QWidget(QtClientClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        login_button = new QPushButton(centralWidget);
        login_button->setObjectName(QString::fromUtf8("login_button"));
        login_button->setGeometry(QRect(440, 300, 131, 61));
        username = new QLineEdit(centralWidget);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(450, 181, 161, 31));
        password = new QLineEdit(centralWidget);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(450, 230, 161, 31));
        password->setEchoMode(QLineEdit::Password);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 180, 81, 31));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(350, 230, 81, 20));
        picture = new QLabel(centralWidget);
        picture->setObjectName(QString::fromUtf8("picture"));
        picture->setGeometry(QRect(0, 0, 301, 451));
        QtClientClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtClientClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1011, 26));
        QtClientClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtClientClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QtClientClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtClientClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtClientClass->setStatusBar(statusBar);

        retranslateUi(QtClientClass);

        QMetaObject::connectSlotsByName(QtClientClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtClientClass)
    {
        QtClientClass->setWindowTitle(QApplication::translate("QtClientClass", "QtClient", nullptr));
        login_button->setText(QApplication::translate("QtClientClass", "LOGIN", nullptr));
        label->setText(QApplication::translate("QtClientClass", "Username", nullptr));
        label_2->setText(QApplication::translate("QtClientClass", "Password", nullptr));
        picture->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QtClientClass: public Ui_QtClientClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTCLIENT_H
