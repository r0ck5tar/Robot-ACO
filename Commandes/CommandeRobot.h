#ifndef COMMANDE_ROBOT_H
#define COMMANDE_ROBOT_H

#include "Commande.h"
#include "../Robot.h"
#include <map> 

using namespace std;

class CommandeRobot : public Commande {
public:	
	CommandeRobot() : Commande() {};
	
	virtual void setRobot(Robot *r);
	
protected:
	CommandeRobot(string nomCommande) : Commande(nomCommande) {};
	Robot *robot;
};

#endif
