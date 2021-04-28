#pragma once

#include <QWidget>
#include "ui_PutereClass.h"
#include"Client.h"
class PutereClass : public QWidget, public Ui::PutereClass
{
	Q_OBJECT

public:
	PutereClass(Client *client, QWidget *parent = Q_NULLPTR);
	~PutereClass();
	Client *CLIENT;
private:
	Ui::PutereClass ui;
private slots:
	void button();
};
