/*
Julien Larochelle & Evelyne Proulx
7 mai 2017
*/



#include "include/MonInterface.h"

MonInterface::MonInterface(const char * theName)
{
	zoneCentrale = new QWidget();

	//TODO peut-être ne pas mettre dans ce constructeur

	ecran = new QLabel("ECRAN");

	button0 = new QPushButton("0");
	button1 = new QPushButton("1");
	button2 = new QPushButton("2");
	button3 = new QPushButton("3");
	button4 = new QPushButton("4");
	button5 = new QPushButton("5");
	button6 = new QPushButton("6");
	button7 = new QPushButton("7");
	button8 = new QPushButton("8");
	button9 = new QPushButton("9");

	egale = new QPushButton("=");
	plus = new QPushButton("+");
	moins = new QPushButton("-");
	multiplication = new QPushButton("*");
	division = new QPushButton("/");
	signe = new QPushButton("+/-");
	point = new QPushButton(".");

	CE = new QPushButton("CE");
	C = new QPushButton("C");
	DEL = new QPushButton("DEL");
	//DEL->show();

	layout1 = new QGridLayout();

	layout1->addWidget(ecran, 0, 0, 1, 4);
	layout1->addWidget(CE, 1, 0);
	layout1->addWidget(C, 1, 1);
	layout1->addWidget(DEL, 1, 2);
	layout1->addWidget(division, 1, 3);
	layout1->addWidget(button7, 2, 0);
	layout1->addWidget(button8, 2, 1);
	layout1->addWidget(button9, 2, 2);
	layout1->addWidget(multiplication, 2, 3);
	layout1->addWidget(button4, 3, 0);
	layout1->addWidget(button5, 3, 1);
	layout1->addWidget(button6, 3, 2);
	layout1->addWidget(moins, 3, 3);
	layout1->addWidget(button1, 4, 0);
	layout1->addWidget(button2, 4, 1);
	layout1->addWidget(button3, 4, 2);
	layout1->addWidget(plus, 4, 3);
	layout1->addWidget(signe, 5, 0);
	layout1->addWidget(button0, 5, 1);
	layout1->addWidget(point, 5, 2);
	layout1->addWidget(egale, 5, 3);

	zoneCentrale->setLayout(layout1);
	setCentralWidget(zoneCentrale);
}

void MonInterface::construct_calcu()
{
	


}


