#ifndef ETAT_ROBOT_ENROUTE_H
#define ETAT_ROBOT_ENROUTE_H
#include "EtatRobot.h"

class EtatRobotEnRoute : public EtatRobot  {
public:
	void figer();
	void afficher();
	
private:
	EtatRobotEnRoute(){ }; //constructeur priv�
	EtatRobotEnRoute(const EtatRobotEnRoute&); //surchage en priv� pour �viter la construction de copie
	void operator=(const EtatRobotEnRoute&); //surchage en priv� pour �viter la copie par affectation
};

#endif