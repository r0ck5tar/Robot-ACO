#ifndef _AFFICHAGE_CONSOLE_H
#define _AFFICHAGE_CONSOLE_H

#include "InterfaceAffichage.h"
#include "Robot.h"


class AffichageConsole : public InterfaceAffichage{
    public:
	void afficher(Robot*);
};


#endif
