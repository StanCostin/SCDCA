/********************************************************************************
** Form generated from reading UI file 'PolinomClass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLINOMCLASS_H
#define UI_POLINOMCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PolinomClass
{
public:
    QLabel *receive_mess;
    QLineEdit *send_mess;
    QComboBox *comboBox;
    QLabel *label_4;
    QLineEdit *send_message;
    QLabel *label_2;
    QComboBox *comboBox2;
    QPushButton *button;
    QLabel *label;
    QLabel *label_3;

    void setupUi(QWidget *PolinomClass)
    {
        if (PolinomClass->objectName().isEmpty())
            PolinomClass->setObjectName(QString::fromUtf8("PolinomClass"));
        PolinomClass->resize(1167, 651);
        receive_mess = new QLabel(PolinomClass);
        receive_mess->setObjectName(QString::fromUtf8("receive_mess"));
        receive_mess->setGeometry(QRect(540, 390, 301, 91));
        send_mess = new QLineEdit(PolinomClass);
        send_mess->setObjectName(QString::fromUtf8("send_mess"));
        send_mess->setGeometry(QRect(410, 280, 241, 61));
        comboBox = new QComboBox(PolinomClass);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(390, 80, 141, 22));
        label_4 = new QLabel(PolinomClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(710, 300, 55, 16));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        send_message = new QLineEdit(PolinomClass);
        send_message->setObjectName(QString::fromUtf8("send_message"));
        send_message->setGeometry(QRect(770, 280, 241, 61));
        label_2 = new QLabel(PolinomClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(250, 70, 131, 31));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        comboBox2 = new QComboBox(PolinomClass);
        comboBox2->setObjectName(QString::fromUtf8("comboBox2"));
        comboBox2->setGeometry(QRect(430, 130, 71, 21));
        button = new QPushButton(PolinomClass);
        button->setObjectName(QString::fromUtf8("button"));
        button->setGeometry(QRect(640, 530, 93, 28));
        label = new QLabel(PolinomClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 120, 221, 41));
        label->setFont(font1);
        label_3 = new QLabel(PolinomClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(340, 300, 55, 16));
        label_3->setFont(font);

        retranslateUi(PolinomClass);

        QMetaObject::connectSlotsByName(PolinomClass);
    } // setupUi

    void retranslateUi(QWidget *PolinomClass)
    {
        PolinomClass->setWindowTitle(QApplication::translate("PolinomClass", "PolinomClass", nullptr));
        receive_mess->setText(QString());
        label_4->setText(QApplication::translate("PolinomClass", "P2  =", nullptr));
        label_2->setText(QApplication::translate("PolinomClass", "Alegeti operatia:", nullptr));
        button->setText(QApplication::translate("PolinomClass", "SEND", nullptr));
        label->setText(QApplication::translate("PolinomClass", "Alegeti gradul polinoamelor", nullptr));
        label_3->setText(QApplication::translate("PolinomClass", "P1  =", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PolinomClass: public Ui_PolinomClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLINOMCLASS_H
