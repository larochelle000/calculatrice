/*
Julien Larochelle & Evelyne Proulx
7 mai 2017
*/


#include <QStyleFactory>
#include<qmainwindow.h>
#include "include/MonInterface.h"

MonInterface::MonInterface(const char * theName)
{
	button = new QPushButton("Hello world !");
	button->show();
}


