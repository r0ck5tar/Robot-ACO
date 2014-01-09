#ifndef COMMANDE_EVALUEROBST_H
#define COMMANDE_EVALUEROBST_H

#include "CommandeRobot.h"
#include "../Robot.h"
#include "../Client.h"


class CommandeEvaluerObst : protected CommandeRobot {
public:
	virtual void execute();
	virtual bool reversible();
	virtual void desexecute();
	
	CommandeEvaluerObst() : CommandeRobot() {};
	
protected:
	virtual CommandeEvaluerObst * constructeurVirtuel(Client *client);
	
private:
	CommandeEvaluerObst(string nomCommande);
	static CommandeEvaluerObst cmd;
	
};

#endif
