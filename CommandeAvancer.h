#ifndef COMMANDEAVANCER_H
#define COMMANDEAVANCER_H

#include <string>
using namespace std;

#include "CommandeRobot.h"

class CommandeAvancer : protected CommandeRobot {
private:
	int x, y;
	int x0,y0;
public:	
	virtual bool reversible();
	virtual void desexecute();
	virtual void execute();
};

#endif
