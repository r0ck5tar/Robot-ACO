#ifndef ETAT_ROBOT_EN_CHARGE_H
#define ETAT_ROBOT_EN_CHARGE_H

#include "EtatRobotEnRoute.h"

class EtatRobotEnCharge : public EtatRobotEnRoute {
   public:
	static EtatRobotEnCharge* instance();
     	void tourner();
	void avancer();
	void peser();
	void rencontrerObstacle();
   
	private:
	EtatRobotEnCharge() : EtatRobotEnRoute("EnCharge"){ }; //constructeur privé
	EtatRobotEnCharge(const EtatRobotEnCharge&); //surchage en privé pour éviter la construction de copie
	void operator=(const EtatRobotEnCharge&); //surchage en privé pour éviter la copie par affectation
};

#endif

