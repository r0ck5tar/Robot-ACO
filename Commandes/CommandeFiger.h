#ifndef COMMANDE_FIGER_H
#define COMMANDE_FIGER_H

#include "CommandeRobot.h"
#include "../Robot.h"
#include "../Client.h"


class CommandeFiger : protected CommandeRobot {
public:
	virtual void execute();
	virtual bool reversible();
	virtual void desexecute();
	
	CommandeFiger() : CommandeRobot() {};
	
protected:
	virtual CommandeFiger * constructeurVirtuel(Client *client);
	
private:
	CommandeFiger(string nomCommande);
	static CommandeFiger cmd;
};

#endif
