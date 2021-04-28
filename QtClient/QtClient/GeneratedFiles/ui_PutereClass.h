/********************************************************************************
** Form generated from reading UI file 'PutereClass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUTERECLASS_H
#define UI_PUTERECLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PutereClass
{
public:
    QLineEdit *send_mess;
    QPushButton *button;
    QLabel *receive_mess;

    void setupUi(QWidget *PutereClass)
    {
        if (PutereClass->objectName().isEmpty())
            PutereClass->setObjectName(QString::fromUtf8("PutereClass"));
        PutereClass->resize(717, 720);
        send_mess = new QLineEdit(PutereClass);
        send_mess->setObjectName(QString::fromUtf8("send_mess"));
        send_mess->setGeometry(QRect(200, 120, 291, 31));
        button = new QPushButton(PutereClass);
        button->setObjectName(QString::fromUtf8("button"));
        button->setGeometry(QRect(290, 430, 93, 28));
        receive_mess = new QLabel(PutereClass);
        receive_mess->setObjectName(QString::fromUtf8("receive_mess"));
        receive_mess->setGeometry(QRect(180, 200, 311, 191));

        retranslateUi(PutereClass);

        QMetaObject::connectSlotsByName(PutereClass);
    } // setupUi

    void retranslateUi(QWidget *PutereClass)
    {
        PutereClass->setWindowTitle(QApplication::translate("PutereClass", "PutereClass", nullptr));
        button->setText(QApplication::translate("PutereClass", "SEND", nullptr));
        receive_mess->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PutereClass: public Ui_PutereClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUTERECLASS_H
