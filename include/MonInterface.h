/*
Julien Larochelle & Evelyne Proulx
7 mai 2017
*/

#ifndef MONINTERFACE_H
#define MONINTERFACE_H

#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMainWindow>
#include<qdialog.h>

class MonInterface : public QDialog
{

	Q_OBJECT


public:
	MonInterface(const char *theName);

private:
	// TODO mettre dans classe
	QLabel* ecran;

	QPushButton* button0;
	QPushButton* button1;
	QPushButton* button2;
	QPushButton* button3;
	QPushButton* button4;
	QPushButton* button5;
	QPushButton* button6;
	QPushButton* button7;
	QPushButton* button8;
	QPushButton* button9;

	QPushButton* egale; 
	QPushButton* plus;
	QPushButton* moins; 
	QPushButton* multiplication; 
	QPushButton* division;
	QPushButton* signe;
	QPushButton* point;

	QPushButton* CE;
	QPushButton* C;
	QPushButton* DEL;

	QVBoxLayout* vertical;

	QHBoxLayout* layout1;
	QHBoxLayout* layout2;
	QHBoxLayout* layout3;
	QHBoxLayout* layout4;
	QHBoxLayout* layout5;

	void construct_calcu();

};

#endif // MONINTERFACE_H