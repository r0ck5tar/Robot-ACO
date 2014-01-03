#ifndef COMMANDEREPARTIR_H
#define COMMANDEREPARTIR_H

#include <string>
using namespace std;

#include "CommandeRobot.h"

class CommandeRepartir : protected CommandeRobot {
public:
	virtual bool reversible();
	virtual void desexecute();
	virtual void execute();
};

#endif
