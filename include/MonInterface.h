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
#include <QStyleFactory>

class MonInterface : public QMainWindow
{

	Q_OBJECT


public:
	MonInterface(const char *theName);

private:
	// TODO mettre dans classe

	QWidget* zoneCentrale;
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

	QGridLayout* layout1;

	void construct_calcu();

};

#endif // MONINTERFACE_H