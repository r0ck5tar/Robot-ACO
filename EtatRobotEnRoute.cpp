#include "Robot.h"
#include "EtatRobotEnRoute.h"
#include "EtatRobotFige.h"

void EtatRobotEnRoute::afficher() {
        //todo
    }

void EtatRobotEnRoute::figer() {
	EtatRobot* e = this->robot->getEtat();
	this->robot->changerEtat(EtatRobotFige::instance());
	EtatRobotFige::instance()->setEtatPrecedent(e);
}

EtatRobotEnRoute& EtatRobotEnRoute::instance() {
	static EtatRobotEnRoute etatRobotEnRoute;
	return etatRobotEnRoute;
}