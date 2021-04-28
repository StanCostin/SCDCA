#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtClient.h"
#include "Client.h"
#include "QtGuiClass.h"
#include "CramerClass.h"
class QtClient : public QMainWindow
{
	Q_OBJECT

public:
	QtClient(Client *client, QWidget *parent = Q_NULLPTR);
	Client *CLIENT;
	~QtClient();
private:
	Ui::QtClientClass ui;
private slots:
	void login_button();
	/*void register_button();
	void delete_button();*/
};