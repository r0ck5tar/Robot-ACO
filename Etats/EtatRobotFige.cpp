#include "EtatRobotFige.h"
#include "../Robot.h"

void EtatRobotFige::repartir() {
    this->robot->changerEtat(etatPrecedent->getNomEtat());
}
	
EtatRobotFige* EtatRobotFige::instance() {
	static EtatRobotFige etatRobotFige;
	return &etatRobotFige;
}

void EtatRobotFige::setEtatPrecedent(EtatRobot *e) {
	etatPrecedent = e;
}
