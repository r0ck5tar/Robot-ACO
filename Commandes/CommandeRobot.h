#ifndef _COMMANDEROBOT_H
#define _COMMANDEROBOT_H

#include <string>
using namespace std;

#include "../Robot.h"
#include "Commande.h"

class CommandeRobot : public Commande {
protected:
	Robot *robot;

public:
	CommandeRobot(string t);

	virtual void execute() = 0;
	virtual void desexecute() = 0;
	virtual bool reversible() = 0;
};

#endif
