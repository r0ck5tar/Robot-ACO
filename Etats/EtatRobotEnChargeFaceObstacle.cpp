#include "EtatRobotEnCharge.h"
#include "EtatRobotEnChargeFaceObstacle.h"
#include "../Robot.h"
#include "EtatRobotAVideFaceObstacle.h"

EtatRobotEnChargeFaceObstacle* EtatRobotEnChargeFaceObstacle::instance() {
	static EtatRobotEnChargeFaceObstacle etatRobotEnChargeFaceObstacle;
	return &etatRobotEnChargeFaceObstacle;
}

void EtatRobotEnChargeFaceObstacle::tourner() {
	this->robot->changerEtat(EtatRobotEnCharge::instance()->getNomEtat());
}

void EtatRobotEnChargeFaceObstacle::poser() {
	this->robot->changerEtat(EtatRobotAVideFaceObstacle::instance()->getNomEtat());
}

void EtatRobotEnChargeFaceObstacle::peser() {

}
