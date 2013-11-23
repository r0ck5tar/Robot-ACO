#include "EtatRobotFige.h"
#include "Robot.h"

    EtatRobotFige::EtatRobotFige(EtatRobot *etatPrecedent)  { 
	this->etatPrecedent = *etatPrecedent;
    }

    void EtatRobotFige::afficher() {
        //todo
    }

    void EtatRobotFige::repartir() {
        this->robot->changerEtat(etatPrecedent);
    }
