#ifndef COMMANDE_PESER_H
#define COMMANDE_PESER_H

#include "CommandeRobot.h"
#include "../Robot.h"
#include "../Client.h"


class CommandePeser : protected CommandeRobot {
public:
	virtual void execute();
	virtual bool reversible();
	virtual void desexecute();
	
	CommandePeser() : CommandeRobot() {};
	
protected:
	virtual CommandePeser * constructeurVirtuel(Client *client);
	
private:
	CommandePeser(string nomCommande);
	static CommandePeser cmd;
	
};

#endif
