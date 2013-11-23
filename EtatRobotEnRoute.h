#ifndef ETAT_ROBOT_ENROUTE_H
#define ETAT_ROBOT_ENROUTE_H
#include "EtatRobot.h"

class EtatRobotEnRoute : public EtatRobot  {
public:
	void figer();
	void afficher();
	
private:
	EtatRobotEnRoute(){ }; //constructeur privé
	EtatRobotEnRoute(const EtatRobotEnRoute&); //surchage en privé pour éviter la construction de copie
	void operator=(const EtatRobotEnRoute&); //surchage en privé pour éviter la copie par affectation
};

#endif