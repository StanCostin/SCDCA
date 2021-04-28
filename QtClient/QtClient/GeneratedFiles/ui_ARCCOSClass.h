/********************************************************************************
** Form generated from reading UI file 'ARCCOSClass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARCCOSCLASS_H
#define UI_ARCCOSCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ARCCOSClass
{
public:
    QPushButton *button;
    QLabel *receive_mess;
    QLineEdit *send_mess;

    void setupUi(QWidget *ARCCOSClass)
    {
        if (ARCCOSClass->objectName().isEmpty())
            ARCCOSClass->setObjectName(QString::fromUtf8("ARCCOSClass"));
        ARCCOSClass->resize(733, 667);
        button = new QPushButton(ARCCOSClass);
        button->setObjectName(QString::fromUtf8("button"));
        button->setGeometry(QRect(300, 380, 93, 28));
        receive_mess = new QLabel(ARCCOSClass);
        receive_mess->setObjectName(QString::fromUtf8("receive_mess"));
        receive_mess->setGeometry(QRect(190, 150, 311, 191));
        send_mess = new QLineEdit(ARCCOSClass);
        send_mess->setObjectName(QString::fromUtf8("send_mess"));
        send_mess->setGeometry(QRect(210, 70, 291, 31));

        retranslateUi(ARCCOSClass);

        QMetaObject::connectSlotsByName(ARCCOSClass);
    } // setupUi

    void retranslateUi(QWidget *ARCCOSClass)
    {
        ARCCOSClass->setWindowTitle(QApplication::translate("ARCCOSClass", "ARCCOSClass", nullptr));
        button->setText(QApplication::translate("ARCCOSClass", "SEND", nullptr));
        receive_mess->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ARCCOSClass: public Ui_ARCCOSClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARCCOSCLASS_H
