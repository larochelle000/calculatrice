/*
Julien Larochelle & Evelyne Proulx
7 mai 2017
*/


#include <QStyleFactory>
#include<qmainwindow.h>
#include "include/MonInterface.h"

MonInterface::MonInterface(const char * theName)
{

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

	vertical = new QVBoxLayout();

	layout1 = new QHBoxLayout();
	layout2 = new QHBoxLayout();
	layout3 = new QHBoxLayout();
	layout4 = new QHBoxLayout();
	layout5 = new QHBoxLayout();

	layout1->addWidget(CE);
	layout1->addWidget(C);
	layout1->addWidget(DEL);
	layout1->addWidget(division);

	vertical->addItem(layout1);

	setLayout(vertical);
}

void MonInterface::construct_calcu()
{
	


}


