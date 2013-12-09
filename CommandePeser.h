#ifndef COMMANDEPESER_H
#define COMMANDEPESER_H

#include <string>
using namespace std;

#include "CommandeRobot.h"

class CommandePeser : protected CommandeRobot {
public:
	virtual bool reversible();
	virtual void desexecute();
	virtual void execute();
};

#endif
