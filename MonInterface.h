/*
*   La classe MonInterface teste l'interface usager VisiTest (librairie).
*   
*   $Author: bruc2001 $
*   $Date: 2014-12-18 11:43:08 -0500 (jeu., 18 déc. 2014) $
*   $Revision: 103 $
*   $Id: MonInterface.h 103 2014-12-18 16:43:08Z bruc2001 $
*
*   Copyright 2016 Département de génie électrique et génie informatique
*                  Université de Sherbrooke  
*/
#ifndef MONINTERFACE_H
#define MONINTERFACE_H

#include "VisiTest.h"

class MonInterface : public VisiTest
{
public:
	MonInterface(const char *theName);
public slots:
	virtual	void testSuivant();
private:
	DonneesTest donnee;
};

#endif // MONINTERFACE_H