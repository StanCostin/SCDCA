#pragma once

#include <QWidget>
#include "ui_CramerClass.h"
#include "Client.h"
class CramerClass : public QWidget, public Ui::CramerClass
{
	Q_OBJECT

public:
	CramerClass(Client *client,QWidget *parent = Q_NULLPTR);
	~CramerClass();
	Client *CLIENT;
private:
	Ui::CramerClass ui;
private slots:
	void button();
};
