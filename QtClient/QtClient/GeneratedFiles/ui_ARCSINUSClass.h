/********************************************************************************
** Form generated from reading UI file 'ARCSINUSClass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARCSINUSCLASS_H
#define UI_ARCSINUSCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ARCSINUSClass
{
public:
    QLineEdit *send_mess;
    QPushButton *button;
    QLabel *receive_mess;

    void setupUi(QWidget *ARCSINUSClass)
    {
        if (ARCSINUSClass->objectName().isEmpty())
            ARCSINUSClass->setObjectName(QString::fromUtf8("ARCSINUSClass"));
        ARCSINUSClass->resize(742, 601);
        send_mess = new QLineEdit(ARCSINUSClass);
        send_mess->setObjectName(QString::fromUtf8("send_mess"));
        send_mess->setGeometry(QRect(210, 70, 291, 31));
        button = new QPushButton(ARCSINUSClass);
        button->setObjectName(QString::fromUtf8("button"));
        button->setGeometry(QRect(300, 380, 93, 28));
        receive_mess = new QLabel(ARCSINUSClass);
        receive_mess->setObjectName(QString::fromUtf8("receive_mess"));
        receive_mess->setGeometry(QRect(190, 150, 311, 191));

        retranslateUi(ARCSINUSClass);

        QMetaObject::connectSlotsByName(ARCSINUSClass);
    } // setupUi

    void retranslateUi(QWidget *ARCSINUSClass)
    {
        ARCSINUSClass->setWindowTitle(QApplication::translate("ARCSINUSClass", "ARCSINUSClass", nullptr));
        button->setText(QApplication::translate("ARCSINUSClass", "SEND", nullptr));
        receive_mess->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ARCSINUSClass: public Ui_ARCSINUSClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARCSINUSCLASS_H
