#ifndef ETAT_ROBOT_A_VIDE_FACE_OBSTACLE_H
#define ETAT_ROBOT_A_VIDE_FACE_OBSTACLE_H

#include "EtatRobotEnRoute.h"

class EtatRobotAVideFaceObstacle : public EtatRobotEnRoute {
   public:
	static EtatRobotAVideFaceObstacle* instance();
    	void tourner();
	void evaluerObstacle();
	void saisir();
   
	private:
	EtatRobotAVideFaceObstacle() : EtatRobotEnRoute("AVideFaceObstacle"){ }; //constructeur privé
	EtatRobotAVideFaceObstacle(const EtatRobotAVideFaceObstacle&); //surchage en privé pour éviter la construction de copie
	void operator=(const EtatRobotAVideFaceObstacle&); //surchage en privé pour éviter la copie par affectation
};

#endif

