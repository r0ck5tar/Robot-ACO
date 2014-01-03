#include "EtatRobotAVideFaceObstacle.h"
#include "EtatRobotAVide.h"
#include "../Robot.h"
#include "EtatRobotEnChargeFaceObstacle.h"

EtatRobotAVideFaceObstacle* EtatRobotAVideFaceObstacle::instance() {
	static EtatRobotAVideFaceObstacle etatRobotAVideFaceObstacle;
	return &etatRobotAVideFaceObstacle;
}

void EtatRobotAVideFaceObstacle::tourner() {
	this->robot->changerEtat(EtatRobotAVide::instance()->getNomEtat());
}

void EtatRobotAVideFaceObstacle::evaluerObstacle() {
	
}

void EtatRobotAVideFaceObstacle::saisir() {
	this->robot->changerEtat(EtatRobotEnChargeFaceObstacle::instance()->getNomEtat());
}

