/********************************************************************************
** Form generated from reading UI file 'RadicalClass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RADICALCLASS_H
#define UI_RADICALCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RadicalClass
{
public:
    QLabel *receive_mess;
    QLineEdit *send_mess;
    QPushButton *button;

    void setupUi(QWidget *RadicalClass)
    {
        if (RadicalClass->objectName().isEmpty())
            RadicalClass->setObjectName(QString::fromUtf8("RadicalClass"));
        RadicalClass->resize(653, 628);
        receive_mess = new QLabel(RadicalClass);
        receive_mess->setObjectName(QString::fromUtf8("receive_mess"));
        receive_mess->setGeometry(QRect(150, 180, 311, 191));
        send_mess = new QLineEdit(RadicalClass);
        send_mess->setObjectName(QString::fromUtf8("send_mess"));
        send_mess->setGeometry(QRect(170, 100, 291, 31));
        button = new QPushButton(RadicalClass);
        button->setObjectName(QString::fromUtf8("button"));
        button->setGeometry(QRect(260, 410, 93, 28));

        retranslateUi(RadicalClass);

        QMetaObject::connectSlotsByName(RadicalClass);
    } // setupUi

    void retranslateUi(QWidget *RadicalClass)
    {
        RadicalClass->setWindowTitle(QApplication::translate("RadicalClass", "RadicalClass", nullptr));
        receive_mess->setText(QString());
        button->setText(QApplication::translate("RadicalClass", "SEND", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RadicalClass: public Ui_RadicalClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RADICALCLASS_H
