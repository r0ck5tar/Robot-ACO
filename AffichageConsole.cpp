#include "AffichageConsole.h"
#include <iostream>

using namespace std;

void AffichageConsole::afficher(Robot* robot) {
                cout<<endl<<"  *********************"<<endl;
		cout<<"  * Etat : "<<robot->getEtat()->getNomEtat()<<endl;
		cout<<"  * Position: ("<<robot->getX()<<", "<<robot->getY()<<")"<<endl;
		cout<<"  * Direction : "<<robot->getDirection()<<endl;	
		if(robot->getObjet()){cout<<"  * Poids de l'objet : "<<robot->getObjet()->getPoids()<<endl;}
		cout<<"  *********************"<<endl;
}

