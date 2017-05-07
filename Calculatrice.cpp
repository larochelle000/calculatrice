/*
*   Ce programme teste l'interface usager VisiTest (librairie)
*   avec l'aide de la classe MonInterface.
*   
*   $Author: bruc2001 $
*   $Date: 2014-12-18 11:43:08 -0500 (jeu., 18 déc. 2014) $
*   $Revision: 103 $
*   $Id: TestVisiTest.cpp 103 2014-12-18 16:43:08Z bruc2001 $
*
*   Copyright 2013 Département de génie électrique et génie informatique
*                  Université de Sherbrooke  
*/
#include <QApplication>
#include "MonInterface.h"

int main( int argc, char ** argv )
{
	QApplication app(argc, argv);
 
	MonInterface gui("TestVisiTest V5.1");

   app.exec();
}
