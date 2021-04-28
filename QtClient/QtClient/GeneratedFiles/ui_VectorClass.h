/********************************************************************************
** Form generated from reading UI file 'VectorClass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VECTORCLASS_H
#define UI_VECTORCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VectorClass
{
public:
    QPushButton *button;
    QLabel *receive_mess;
    QLineEdit *send_mess;
    QLineEdit *send_message;
    QComboBox *comboBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *VectorClass)
    {
        if (VectorClass->objectName().isEmpty())
            VectorClass->setObjectName(QString::fromUtf8("VectorClass"));
        VectorClass->resize(836, 617);
        QFont font;
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        VectorClass->setFont(font);
        button = new QPushButton(VectorClass);
        button->setObjectName(QString::fromUtf8("button"));
        button->setGeometry(QRect(310, 380, 93, 28));
        receive_mess = new QLabel(VectorClass);
        receive_mess->setObjectName(QString::fromUtf8("receive_mess"));
        receive_mess->setGeometry(QRect(210, 240, 301, 91));
        send_mess = new QLineEdit(VectorClass);
        send_mess->setObjectName(QString::fromUtf8("send_mess"));
        send_mess->setGeometry(QRect(80, 130, 241, 61));
        send_message = new QLineEdit(VectorClass);
        send_message->setObjectName(QString::fromUtf8("send_message"));
        send_message->setGeometry(QRect(440, 130, 241, 61));
        comboBox = new QComboBox(VectorClass);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(290, 30, 141, 22));
        label_2 = new QLabel(VectorClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 20, 131, 31));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_3 = new QLabel(VectorClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 150, 55, 16));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        label_4 = new QLabel(VectorClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(380, 150, 55, 16));
        label_4->setFont(font2);
        label_5 = new QLabel(VectorClass);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(310, 200, 131, 31));
        label_5->setFont(font1);

        retranslateUi(VectorClass);

        QMetaObject::connectSlotsByName(VectorClass);
    } // setupUi

    void retranslateUi(QWidget *VectorClass)
    {
        VectorClass->setWindowTitle(QApplication::translate("VectorClass", "VectorClass", nullptr));
        button->setText(QApplication::translate("VectorClass", "SEND", nullptr));
        receive_mess->setText(QString());
        label_2->setText(QApplication::translate("VectorClass", "Alegeti operatia:", nullptr));
        label_3->setText(QApplication::translate("VectorClass", "V1   =", nullptr));
        label_4->setText(QApplication::translate("VectorClass", "V2   =", nullptr));
        label_5->setText(QApplication::translate("VectorClass", "Rezultatul:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VectorClass: public Ui_VectorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VECTORCLASS_H
