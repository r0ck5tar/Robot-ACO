#include "AffichageConsole.h"
#include <iostream>

using namespace std;

void AffichageConsole::afficher(Robot* robot) {
		cout<<"Etat : "<<robot->getEtat()->getNomEtat()<<endl;
}

