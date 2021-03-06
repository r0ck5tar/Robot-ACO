#ifndef COMMANDE_AVANCER_H
#define COMMANDE_AVANCER_H

#include "CommandeRobot.h"
#include "../Robot.h"
#include "../Client.h"


class CommandeAvancer : protected CommandeRobot {
public:
	virtual void execute();
	virtual bool reversible();
	virtual void desexecute();
	
	CommandeAvancer() : CommandeRobot() {};
	
protected:
	virtual CommandeAvancer * constructeurVirtuel(Client *client);
	
private:
	CommandeAvancer(string nomCommande);
	static CommandeAvancer cmd;
	int x, y, xPrecedent, yPrecedent;
};

#endif
