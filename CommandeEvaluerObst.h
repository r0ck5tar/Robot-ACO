#ifndef COMMANDEEVALUEROBST_H
#define COMMANDEEVALUEROBST_H

#include <string>
using namespace std;

#include "CommandeRobot.h"


class CommandeEvaluerObst : protected CommandeRobot {
public:
	virtual bool reversible();
	virtual void desexecute();
	virtual void execute();
};

#endif
