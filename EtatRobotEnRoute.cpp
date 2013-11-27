#include "Robot.h"
#include "EtatRobotEnRoute.h"
#include "EtatRobotFige.h"

void EtatRobotEnRoute::figer() {
	EtatRobot* e = this->robot->getEtat();
	this->robot->changerEtat(EtatRobotFige::instance()->getNomEtat());
	EtatRobotFige::instance()->setEtatPrecedent(e);  
}
