#pragma once

#include <QWidget>
#include "ui_PermutariClass.h"
#include "Client.h"

class PermutariClass : public QWidget, public Ui::PermutariClass
{
	Q_OBJECT

public:
	PermutariClass(Client *client, QWidget *parent = Q_NULLPTR);
	~PermutariClass();
	Client *CLIENT;
private:
	Ui::PermutariClass ui;
private slots:
	void button();
};
