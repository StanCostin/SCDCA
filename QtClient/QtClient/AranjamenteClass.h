#pragma once

#include <QWidget>
#include "ui_AranjamenteClass.h"
#include "Client.h"

class AranjamenteClass : public QWidget, public Ui::AranjamenteClass
{
	Q_OBJECT

public:
	AranjamenteClass(Client *client, QWidget *parent = Q_NULLPTR);
	~AranjamenteClass();
	Client *CLIENT;
private:
	Ui::AranjamenteClass ui;
private slots:
	void button();
};
