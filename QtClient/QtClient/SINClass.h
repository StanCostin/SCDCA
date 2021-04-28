#pragma once

#include <QWidget>
#include "ui_SINClass.h"
#include "Client.h"
class SINClass : public QWidget, public Ui::SINClass
{
	Q_OBJECT

public:
	SINClass(Client *client, QWidget *parent = Q_NULLPTR);
	~SINClass();
	Client *CLIENT;
private:
	Ui::SINClass ui;
private slots:
	void button();
};
