#ifndef ETAT_ROBOT_ENROUTE_H
#define ETAT_ROBOT_ENROUTE_H
#include "EtatRobot.h"

class EtatRobotEnRoute : public EtatRobot  {
public:
	void figer();
	
protected:
	EtatRobotEnRoute(string nomEtat) : EtatRobot(nomEtat) { };  //constructeur prot�g� pour permettre la d�rivation.
	
private:
	EtatRobotEnRoute(const EtatRobotEnRoute&); //surchage en priv� pour �viter la construction de copie
	void operator=(const EtatRobotEnRoute&); //surchage en priv� pour �viter la copie par affectation
};

#endif