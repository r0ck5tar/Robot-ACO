#ifndef COMMANDERENCONTREROBST_H
#define COMMANDERENCONTREROBST_H

#include <string>
using namespace std;

#include "CommandeRobot.h"

class CommandeRencontrerObst : protected CommandeRobot {
private:
	Obstacle* obst;

public:	
	virtual void execute();
};

#endif
