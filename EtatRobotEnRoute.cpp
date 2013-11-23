#include "Robot.h"
#include "EtatRobot.h"
#include "EtatRobotFige.h"

class EtatRobotEnRoute : protected EtatRobot  {
public:
	void figer();
	void afficher();

};

void EtatRobotEnRoute::afficher() {
        //todo
    }

void EtatRobotEnRoute::figer() {
	EtatRobot* e = this->robot->getEtat();
	this->robot->changerEtat(EtatRobotFige(e));
	
}
