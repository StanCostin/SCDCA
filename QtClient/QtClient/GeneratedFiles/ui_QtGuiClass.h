/********************************************************************************
** Form generated from reading UI file 'QtGuiClass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUICLASS_H
#define UI_QTGUICLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGuiClass
{
public:
    QPushButton *button;
    QComboBox *comboBox;

    void setupUi(QWidget *QtGuiClass)
    {
        if (QtGuiClass->objectName().isEmpty())
            QtGuiClass->setObjectName(QString::fromUtf8("QtGuiClass"));
        QtGuiClass->resize(892, 698);
        button = new QPushButton(QtGuiClass);
        button->setObjectName(QString::fromUtf8("button"));
        button->setGeometry(QRect(380, 320, 93, 28));
        comboBox = new QComboBox(QtGuiClass);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(320, 250, 221, 31));

        retranslateUi(QtGuiClass);

        QMetaObject::connectSlotsByName(QtGuiClass);
    } // setupUi

    void retranslateUi(QWidget *QtGuiClass)
    {
        QtGuiClass->setWindowTitle(QApplication::translate("QtGuiClass", "QtGuiClass", nullptr));
        button->setText(QApplication::translate("QtGuiClass", "SELECT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtGuiClass: public Ui_QtGuiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUICLASS_H
