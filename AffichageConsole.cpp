#include "AffichageConsole.h"
#include <iostream>

using namespace std;

void AffichageConsole::afficher(Robot* robot) {
		cout<<"Etat : "<<robot->getEtat()->getNomEtat()<<endl;
		cout<<"direction : "<<robot->getDirection()<<endl;	
		if(robot->getObjet()){cout<<"Poids de l'objet : "<<robot->getObjet()->getPoids()<<endl;}
}

