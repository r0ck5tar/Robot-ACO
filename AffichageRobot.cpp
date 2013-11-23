#include "AffichageRobot.h"


AffichageRobot::AffichageRobot(Robot* robot): robot(robot){}

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
	for(int i = 0, size = afficheurs.size(); i < size; ++i)
		afficheurs[i]->afficher(robot);
}

