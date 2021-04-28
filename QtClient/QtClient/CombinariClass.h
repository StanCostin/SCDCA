#pragma once

#include <QWidget>
#include "ui_CombinariClass.h"
#include "Client.h"

class CombinariClass : public QWidget, public Ui::CombinariClass
{
	Q_OBJECT

public:
	CombinariClass(Client *client, QWidget *parent = Q_NULLPTR);
	~CombinariClass();
	Client *CLIENT;
private:
	Ui::CombinariClass ui;
private slots:
	void button();
};
