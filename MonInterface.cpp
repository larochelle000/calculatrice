/*
*   Voir fichier d'entête pour informations.
*   
*   $Author: bruc2001 $
*   $Date: 2014-12-18 11:43:08 -0500 (jeu., 18 déc. 2014) $
*   $Revision: 103 $
*   $Id: MonInterface.cpp 103 2014-12-18 16:43:08Z bruc2001 $
*
*   Copyright 2013 Département de génie électrique et génie informatique
*                  Université de Sherbrooke  
*/
#include <QStyleFactory>
#include "MonInterface.h"

MonInterface::MonInterface(const char * theName) : VisiTest(theName)
{
	donnee.typeTest = 1;
	donnee.registreSW = 1;
	donnee.retourSW = 1;

	donnee.registreLD = 1;
	donnee.valeurLD = 1;

	donnee.etatLD = 1;
	donnee.etatSW = 1;

	resetTest();
	resetArchive();
}

void MonInterface::testSuivant()
{
	setTest(donnee);
	setArchive(donnee);
	setArchive(donnee.typeTest, donnee.registreSW);
   
   if(donnee.etatLD > 0x80)
	{
		donnee.typeTest = 1;

		donnee.registreSW = 1;
		donnee.retourSW = 1;

		donnee.registreLD = 1;
		donnee.valeurLD = 1;

		donnee.etatLD = 1;
		donnee.etatSW = 1;
	}
	else
	{
		donnee.typeTest++;
		
		donnee.registreSW++;
		donnee.retourSW <<= 1;

		donnee.registreLD++;
		donnee.valeurLD <<= 1;

		donnee.etatLD <<= 1;
		donnee.etatSW <<= 1;
	}

   message("bye");
}
