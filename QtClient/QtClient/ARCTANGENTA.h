#pragma once

#include <QWidget>
#include "ui_ARCTANGENTA.h"
#include "Client.h"

class ARCTANGENTA : public QWidget, public Ui::ARCTANGENTA
{
	Q_OBJECT

public:
	ARCTANGENTA(Client *client, QWidget *parent = Q_NULLPTR);
	~ARCTANGENTA();
	Client *CLIENT;
private:
	Ui::ARCTANGENTA ui;
private slots:
	void button();
};
