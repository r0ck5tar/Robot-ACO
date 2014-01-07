#ifndef COMMANDE_REPARTIR_H
#define COMMANDE_REPARTIR_H

#include "CommandeRobot.h"
#include "../Robot.h"
#include "../Client.h"


class CommandeRepartir : protected CommandeRobot {
public:
	virtual void execute();
	virtual bool reversible();
	virtual void desexecute();
	
	CommandeRepartir() : CommandeRobot() {};
	
protected:
	virtual CommandeRepartir * constructeurVirtuel(Client *client);
	
private:
	CommandeRepartir(string nomCommande);
	static CommandeRepartir cmd;
};

#endif
