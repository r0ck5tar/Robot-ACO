#ifndef COMMANDEPOSER_H
#define COMMANDEPOSER_H

#include <string>
using namespace std;

#include "CommandeRobot.h"

class CommandePoser : protected CommandeRobot {
public:
	virtual bool reversible();
	virtual void desexecute();
	virtual void execute();
};

#endif
