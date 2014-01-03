#ifndef ETAT_ROBOT_EN_CHARGE_FACE_OBSTACLE_H
#define ETAT_ROBOT_EN_CHARGE_FACE_OBSTACLE_H

#include "EtatRobotEnRoute.h"

class EtatRobotEnChargeFaceObstacle : public EtatRobotEnRoute {
   public:
	static EtatRobotEnChargeFaceObstacle* instance();
     	void tourner();
	void poser();
	void peser();
   
	private:
	EtatRobotEnChargeFaceObstacle() : EtatRobotEnRoute("EnChargeFaceObstacle"){ }; //constructeur privé
	EtatRobotEnChargeFaceObstacle(const EtatRobotEnChargeFaceObstacle&); //surchage en privé pour éviter la construction de copie
	void operator=(const EtatRobotEnChargeFaceObstacle&); //surchage en privé pour éviter la copie par affectation
};

#endif

