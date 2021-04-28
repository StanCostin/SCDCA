#include "VectorClass.h"
VectorClass::VectorClass(Client *client,QWidget *parent)
	: QWidget(parent)
{
	CLIENT = client;
	ui.setupUi(this);
	QPixmap bkgnd("D:/Atm_Cursuri_Anul2/sem_II/ProiectPOO/SCDCA/InterfataClient/QtClient/parchet-laminat-stejar-amestecat-contrast-gri.jpg");
	bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
	QPalette palette;
	palette.setBrush(QPalette::Background, bkgnd);
	this->setPalette(palette);
	ui.button->setStyleSheet("background-color:lightgrey");
	ui.receive_mess->setStyleSheet("background-color:lightgrey");
	ui.send_message->setStyleSheet("background-color:lightgrey");
	ui.send_mess->setStyleSheet("background-color:lightgrey");
	connect(ui.button, SIGNAL(released()), this, SLOT(button()));
	ui.comboBox->addItem("Adunare");
	ui.comboBox->addItem("Scadere");
	ui.comboBox->addItem("Inmultire");
}
VectorClass::~VectorClass()
{
}
void VectorClass::button()
{
	if (ui.comboBox->currentText() == "Adunare")
	{
		string Send1 = ui.send_mess->text().toStdString();
		string Send2= ui.send_message->text().toStdString();
		string add = "Adunare/";
		string result = "(Vector)" + add + Send1 + ";" + Send2;
		CLIENT->process(result);
		string mess = CLIENT->get_message_received();
		ui.receive_mess->setText(QString::fromStdString(mess));
	}
	if (ui.comboBox->currentText() == "Scadere")
	{
		string Send1 = ui.send_mess->text().toStdString();
		string Send2 = ui.send_message->text().toStdString();
		string add = "Scadere/";
		string result = "(Vector)" + add + Send1 + ";" + Send2;
		CLIENT->process(result);
		string mess = CLIENT->get_message_received();
		ui.receive_mess->setText(QString::fromStdString(mess));
	}
	if (ui.comboBox->currentText() == "Inmultire")
	{
		string Send1 = ui.send_mess->text().toStdString();
		string Send2 = ui.send_message->text().toStdString();
		string add = "Inmultire/";
		string result = "(Vector)" + add + Send1 + ";" + Send2;
		CLIENT->process(result);
		string mess = CLIENT->get_message_received();
		ui.receive_mess->setText(QString::fromStdString(mess));
	}
}