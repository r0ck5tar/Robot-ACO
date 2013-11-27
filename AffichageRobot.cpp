#include "AffichageRobot.h"
#include "AffichageConsole.h"
#include <iostream>
using namespace std;

AffichageRobot::AffichageRobot(Robot* robot): robot(robot){
    attacherAfficheur(new AffichageConsole());
}

void AffichageRobot::attacherAfficheur(InterfaceAffichage* afficheur)
{
	afficheurs.push_back(afficheur);
}

void AffichageRobot::detacherAfficheur()
{
	afficheurs.pop_back();
}

void AffichageRobot::notifier()
{
	for(int i = 0, size = afficheurs.size(); i < size; ++i) {
		afficheurs[i]->afficher(robot);
    }
}

