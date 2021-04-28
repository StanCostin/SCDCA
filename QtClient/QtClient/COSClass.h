#pragma once
#include <QWidget>
#include "ui_COSClass.h"
#include "Client.h"
class COSClass : public QWidget, public Ui::COSClass
{
	Q_OBJECT
public:
	COSClass(Client *client, QWidget *parent = Q_NULLPTR);
	~COSClass();
	Client *CLIENT;
private:
	Ui::COSClass ui;
private slots:
	void button();
};