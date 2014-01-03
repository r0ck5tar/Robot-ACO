#include "EtatRobotAVide.h"
#include "../Robot.h"
#include "EtatRobotAVideFaceObstacle.h"


EtatRobotAVide* EtatRobotAVide::instance() {
	static EtatRobotAVide etatRobotAVide;
	return &etatRobotAVide;
}

void EtatRobotAVide::tourner() {
	
}

void EtatRobotAVide::avancer() {
	
}

void EtatRobotAVide::rencontrerObstacle() {
	this->robot->changerEtat(EtatRobotAVideFaceObstacle::instance()->getNomEtat());
}

