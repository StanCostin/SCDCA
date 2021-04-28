/********************************************************************************
** Form generated from reading UI file 'COSClass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COSCLASS_H
#define UI_COSCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_COSClass
{
public:
    QLineEdit *send_mess;
    QLabel *receive_mess;
    QPushButton *button;

    void setupUi(QWidget *COSClass)
    {
        if (COSClass->objectName().isEmpty())
            COSClass->setObjectName(QString::fromUtf8("COSClass"));
        COSClass->resize(694, 799);
        send_mess = new QLineEdit(COSClass);
        send_mess->setObjectName(QString::fromUtf8("send_mess"));
        send_mess->setGeometry(QRect(180, 100, 291, 31));
        receive_mess = new QLabel(COSClass);
        receive_mess->setObjectName(QString::fromUtf8("receive_mess"));
        receive_mess->setGeometry(QRect(170, 180, 311, 191));
        button = new QPushButton(COSClass);
        button->setObjectName(QString::fromUtf8("button"));
        button->setGeometry(QRect(270, 450, 93, 28));

        retranslateUi(COSClass);

        QMetaObject::connectSlotsByName(COSClass);
    } // setupUi

    void retranslateUi(QWidget *COSClass)
    {
        COSClass->setWindowTitle(QApplication::translate("COSClass", "COSClass", nullptr));
        receive_mess->setText(QString());
        button->setText(QApplication::translate("COSClass", "SEND", nullptr));
    } // retranslateUi

};

namespace Ui {
    class COSClass: public Ui_COSClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COSCLASS_H
