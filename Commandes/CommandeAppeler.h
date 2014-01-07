#ifndef COMMANDE_APPELER_H
#define COMMANDE_APPELER_H

#include "CommandeRobot.h"
#include "../Robot.h"
#include "../Client.h"

using namespace std;


class CommandeAppeler : protected CommandeRobot {
public:
	virtual void execute();
	virtual bool reversible();
	virtual void desexecute() {};

	CommandeAppeler() : CommandeRobot() {};
	
protected:
	virtual CommandeAppeler * constructeurVirtuel(Client *client);
	
private:
	CommandeAppeler(string nomCommande);
	static CommandeAppeler cmd;
	string nomMacro;
};

#endif
