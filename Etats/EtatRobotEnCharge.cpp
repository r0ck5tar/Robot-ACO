#include "EtatRobotEnCharge.h"
#include "EtatRobotEnChargeFaceObstacle.h"
#include "../Robot.h"

EtatRobotEnCharge* EtatRobotEnCharge::instance() {
	static EtatRobotEnCharge etatRobotEnCharge;
	return &etatRobotEnCharge;
}

void EtatRobotEnCharge::tourner() {
	
}

void EtatRobotEnCharge::avancer() {
	
}

void EtatRobotEnCharge::peser() {

}

void EtatRobotEnCharge::rencontrerObstacle() {
	this->robot->changerEtat(EtatRobotEnChargeFaceObstacle::instance()->getNomEtat());
}

