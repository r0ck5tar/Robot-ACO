#ifndef COMMANDEFIGER_H
#define COMMANDEFIGER_H

#include <string>
using namespace std;

#include "CommandeRobot.h"


class CommandeFiger : protected CommandeRobot {
public:
	virtual bool reversible();
	virtual void desexecute();
	virtual void execute();
};

#endif
