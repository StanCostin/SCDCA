#include "QtClient.h"
#include "qmessagebox.h"
QtClient::QtClient(Client *client,QWidget *parent)
	: QMainWindow(parent)
{
	this->CLIENT = client;
	CLIENT->create_socket();
	CLIENT->connect_to_server(); //D:/img/qt_pic.png scaled(w, h, Qt::KeepAspectRatio)
	ui.setupUi(this);
	QPixmap bkgnd("D:/Atm_Cursuri_Anul2/sem_II/ProiectPOO/SCDCA/InterfataClient/QtClient/P.jpg");
	bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
	QPalette palette;
	palette.setBrush(QPalette::Background, bkgnd);
	this->setPalette(palette);
	ui.login_button->setStyleSheet("background-color:lightgrey");
	ui.label->setText("<b><font color= 'black'>Username</font>");
	ui.label_2->setText("<b><font color = 'black'>Password< / font>");
	ui.username->setStyleSheet("background-color:lightblue");
	ui.password->setStyleSheet("background-color:lightblue");
	connect(ui.login_button, SIGNAL(released()), this, SLOT(login_button()));
}

QtClient::~QtClient()
{
}
void QtClient::login_button()
{
	string username = ui.username->text().toStdString();
	string password = ui.password->text().toStdString();
	string log = "(LOG)" + username + "*" + password;
	CLIENT->process(log);
	char b[100];
	strcpy(b,CLIENT->get_message_received().c_str());
	char x[1000], y[100];
	strcpy(x,b);
	char *p = strtok(x, " ");
	strcpy(y, p);
	p = strtok(NULL, " ");
	if (strcmp(y,"OK")==0)
	{
		this->hide();
		string mess = p;
		auto new_window = new QtGuiClass(CLIENT,mess,nullptr);
		new_window->show();
	}
	else
	{
		QMessageBox::warning(this, "Login", "Username or password is not correct");
	}
}