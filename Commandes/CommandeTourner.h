#ifndef COMMANDETOURNER_H
#define COMMANDETOURNER_H

#include <string>
using namespace std;

#include "CommandeRobot.h"

class CommandeTourner : protected CommandeRobot {
private:
	string oldDirection;
	string direction;

public:
	virtual bool reversible();
	virtual void desexecute();
	virtual void execute();
};

#endif
