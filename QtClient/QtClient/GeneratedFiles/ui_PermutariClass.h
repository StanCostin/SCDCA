/********************************************************************************
** Form generated from reading UI file 'PermutariClass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERMUTARICLASS_H
#define UI_PERMUTARICLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PermutariClass
{
public:
    QLabel *receive_mess;
    QLineEdit *send_mess;
    QPushButton *button;

    void setupUi(QWidget *PermutariClass)
    {
        if (PermutariClass->objectName().isEmpty())
            PermutariClass->setObjectName(QString::fromUtf8("PermutariClass"));
        PermutariClass->resize(645, 533);
        receive_mess = new QLabel(PermutariClass);
        receive_mess->setObjectName(QString::fromUtf8("receive_mess"));
        receive_mess->setGeometry(QRect(150, 150, 311, 191));
        send_mess = new QLineEdit(PermutariClass);
        send_mess->setObjectName(QString::fromUtf8("send_mess"));
        send_mess->setGeometry(QRect(170, 70, 291, 31));
        button = new QPushButton(PermutariClass);
        button->setObjectName(QString::fromUtf8("button"));
        button->setGeometry(QRect(260, 380, 93, 28));

        retranslateUi(PermutariClass);

        QMetaObject::connectSlotsByName(PermutariClass);
    } // setupUi

    void retranslateUi(QWidget *PermutariClass)
    {
        PermutariClass->setWindowTitle(QApplication::translate("PermutariClass", "PermutariClass", nullptr));
        receive_mess->setText(QString());
        button->setText(QApplication::translate("PermutariClass", "SEND", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PermutariClass: public Ui_PermutariClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERMUTARICLASS_H
