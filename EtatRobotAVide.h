#ifndef ETAT_ROBOT_A_VIDE_H
#define ETAT_ROBOT_A_VIDE_H

#include "EtatRobotEnRoute.h"

class EtatRobotAVide : public EtatRobotEnRoute {
   public:
	static EtatRobotAVide* instance();
    void tourner();
	void avancer();
	void rencontrerObstacle();
   
	private:
	EtatRobotAVide() : EtatRobotEnRoute("AVide"){ }; //constructeur privé
	EtatRobotAVide(const EtatRobotAVide&); //surchage en privé pour éviter la construction de copie
	void operator=(const EtatRobotAVide&); //surchage en privé pour éviter la copie par affectation
};

#endif

