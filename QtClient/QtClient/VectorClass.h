#pragma once

#include <QWidget>
#include "ui_VectorClass.h"
#include "Client.h"
class VectorClass : public QWidget, public Ui::VectorClass
{
	Q_OBJECT

public:
	VectorClass(Client *client,QWidget *parent = Q_NULLPTR);
	~VectorClass();
	Client *CLIENT;
private:
	Ui::VectorClass ui;
private slots:
	void button();
};
