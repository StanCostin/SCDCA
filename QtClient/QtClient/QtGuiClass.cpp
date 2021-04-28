#include "QtGuiClass.h"
QtGuiClass::QtGuiClass(Client * client,string list,QWidget * parent)
{
	this->CLIENT = client;
	ui.setupUi(this);
	QPixmap bkgnd("D:/Atm_Cursuri_Anul2/sem_II/ProiectPOO/SCDCA/InterfataClient/QtClient/P.jpg");
	bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
	QPalette palette;
	palette.setBrush(QPalette::Background, bkgnd);
	this->setPalette(palette);
	char q[1000];
	strcpy(q, list.c_str());
	char *p = strtok(q, ";");
	int k = 0;
	while (p)
	{
		strcpy(word[k++], p);
		p = strtok(NULL, ";");
	}
	for (int i = 0; i < k; i++)
	{
		string q(word[i]);
		QString str = QString::fromStdString(q);
		ui.comboBox->addItem(str);
	}
	ui.comboBox->setStyleSheet("background-color:lightgrey");
	ui.button->setStyleSheet("background-color:lightgrey");
	connect(ui.button, SIGNAL(released()), this, SLOT(button()));
}
QtGuiClass::~QtGuiClass()
{
}
void QtGuiClass::button()
{
	if (ui.comboBox->currentText() == "cos")
	{
		auto new_window = new COSClass(CLIENT,nullptr);
		new_window->show();
	}
	if (ui.comboBox->currentText() == "sin")
	{
		auto new_window = new SINClass(CLIENT, nullptr);
		new_window->show();
	}
	if (ui.comboBox->currentText() == "tg")
	{
		auto new_window = new TANGENTAClass(CLIENT, nullptr);
		new_window->show();
	}
	if (ui.comboBox->currentText() == "ctg")
	{
		auto new_window = new COTANGENTAClass(CLIENT, nullptr);
		new_window->show();
	}
	if (ui.comboBox->currentText() == "arccos")
	{
		auto new_window = new ARCCOSClass(CLIENT, nullptr);
		new_window->show();
	}
	if (ui.comboBox->currentText() == "arcsin")
	{
		auto new_window = new ARCSINUSClass(CLIENT, nullptr);
		new_window->show();
	}
	if (ui.comboBox->currentText() == "arctg")
	{
		auto new_window = new ARCTANGENTA(CLIENT, nullptr);
		new_window->show();
	}
	if (ui.comboBox->currentText() == "arcctg")
	{
		auto new_window = new ARCCOTANGENTAClass(CLIENT, nullptr);
		new_window->show();
	}
	if (ui.comboBox->currentText() == "vector")
	{
		auto new_window = new VectorClass(CLIENT, nullptr);
		new_window->show();
	}
	if (ui.comboBox->currentText() == "radical")
	{
		auto new_window = new RadicalClass(CLIENT, nullptr);
		new_window->show();
	}
	if (ui.comboBox->currentText() == "putere")
	{
		auto new_window = new PutereClass(CLIENT, nullptr);
		new_window->show();
	}
	if (ui.comboBox->currentText() == "EcGradIFG")
	{
		auto new_window = new EcGradIFGClass(CLIENT, nullptr);
		new_window->show();
	}
	if (ui.comboBox->currentText() == "EcGradICON")
	{
		auto new_window = new EcGradICONClass(CLIENT, nullptr);
		new_window->show();
	}
	if (ui.comboBox->currentText() == "EcGradII")
	{
		auto new_window = new EcGradIIClass(CLIENT, nullptr);
		new_window->show();
	}
	if (ui.comboBox->currentText() == "Logaritm")
	{
		auto new_window = new LogaritmClass(CLIENT, nullptr);
		new_window->show();
	}
	if (ui.comboBox->currentText() == "OperatiiTrigonometirce")
	{
		auto new_window = new OpTrigonometriceClass(CLIENT, nullptr);
		new_window->show();
	}
	if (ui.comboBox->currentText() == "Integrala")
	{
		auto new_window = new IntegralaClass(CLIENT, nullptr);
		new_window->show();
	}
	if (ui.comboBox->currentText() == "Polinom")
	{
		auto new_window = new PolinomClass(CLIENT, nullptr);
		new_window->show();
	}
	if (ui.comboBox->currentText() == "Cramer")
	{
		auto new_window = new CramerClass(CLIENT, nullptr);
		new_window->show();
	}
	if (ui.comboBox->currentText() == "permutari")
	{
		auto new_window = new PermutariClass(CLIENT, nullptr);
		new_window->show();
	}
	if (ui.comboBox->currentText() == "aranjamente")
	{
		auto new_window = new AranjamenteClass(CLIENT, nullptr);
		new_window->show();
	}
	if (ui.comboBox->currentText() == "combinari")
	{
		auto new_window = new CombinariClass(CLIENT, nullptr);
		new_window->show();
	}
}