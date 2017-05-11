/*
Julien Larochelle & Evelyne Proulx
7 mai 2017
*/


#include <QApplication>
#include "include/MonInterface.h"

int main( int argc, char ** argv )
{
	QApplication app(argc, argv);
 
	MonInterface gui("Calculatrice v1.0");

	gui.show();
	
	return app.exec();
}
