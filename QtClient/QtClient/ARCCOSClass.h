#pragma once

#include <QWidget>
#include "ui_ARCCOSClass.h"
#include"Client.h"

class ARCCOSClass : public QWidget, public Ui::ARCCOSClass
{
	Q_OBJECT

public:
	ARCCOSClass(Client *client, QWidget *parent = Q_NULLPTR);
	~ARCCOSClass();
	Client *CLIENT;
private:
	Ui::ARCCOSClass ui;
private slots:
	void button();
};
