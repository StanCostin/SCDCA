/********************************************************************************
** Form generated from reading UI file 'CombinariClass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMBINARICLASS_H
#define UI_COMBINARICLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CombinariClass
{
public:
    QPushButton *button;
    QLabel *receive_mess;
    QLineEdit *send_mess;

    void setupUi(QWidget *CombinariClass)
    {
        if (CombinariClass->objectName().isEmpty())
            CombinariClass->setObjectName(QString::fromUtf8("CombinariClass"));
        CombinariClass->resize(617, 523);
        button = new QPushButton(CombinariClass);
        button->setObjectName(QString::fromUtf8("button"));
        button->setGeometry(QRect(250, 400, 93, 28));
        receive_mess = new QLabel(CombinariClass);
        receive_mess->setObjectName(QString::fromUtf8("receive_mess"));
        receive_mess->setGeometry(QRect(140, 170, 311, 191));
        send_mess = new QLineEdit(CombinariClass);
        send_mess->setObjectName(QString::fromUtf8("send_mess"));
        send_mess->setGeometry(QRect(160, 90, 291, 31));

        retranslateUi(CombinariClass);

        QMetaObject::connectSlotsByName(CombinariClass);
    } // setupUi

    void retranslateUi(QWidget *CombinariClass)
    {
        CombinariClass->setWindowTitle(QApplication::translate("CombinariClass", "CombinariClass", nullptr));
        button->setText(QApplication::translate("CombinariClass", "SEND", nullptr));
        receive_mess->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CombinariClass: public Ui_CombinariClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMBINARICLASS_H
