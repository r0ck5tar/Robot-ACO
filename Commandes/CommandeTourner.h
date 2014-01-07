#ifndef COMMANDE_TOURNER_H
#define COMMANDE_TOURNER_H

#include "CommandeRobot.h"
#include "../Robot.h"
#include "../Client.h"


class CommandeTourner : protected CommandeRobot {
public:
	virtual void execute();
	virtual bool reversible();
	virtual void desexecute();
	
	CommandeTourner() : CommandeRobot() {};
	
protected:
	virtual CommandeTourner * constructeurVirtuel(Client *client);
	
private:
	CommandeTourner(string nomCommande);
	static CommandeTourner cmd;
	string direction, directionPrecedent;
};

#endif
