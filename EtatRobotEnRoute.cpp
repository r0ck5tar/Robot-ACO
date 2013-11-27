#include "Robot.h"
#include "EtatRobotEnRoute.h"
#include "EtatRobotFige.h"
#include <iostream>
using namespace std;

void EtatRobotEnRoute::figer() {
	string e = this->getNomEtat();
	this->robot->changerEtat(EtatRobotFige::instance()->getNomEtat());
	EtatRobotFige::instance()->setEtatPrecedent(EtatRobot::getEtat(e));
}
