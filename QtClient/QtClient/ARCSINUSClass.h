#pragma once

#include <QWidget>
#include "ui_ARCSINUSClass.h"
#include"Client.h"

class ARCSINUSClass : public QWidget, public Ui::ARCSINUSClass
{
	Q_OBJECT

public:
	ARCSINUSClass(Client *client,QWidget *parent = Q_NULLPTR);
	~ARCSINUSClass();
	Client *CLIENT;
private:
	Ui::ARCSINUSClass ui;
private slots:
	void button();
};
