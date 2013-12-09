#ifndef COMMANDESAISIR_H
#define COMMANDESAISIR_H

#include <string>
using namespace std;

#include "CommandeRobot.h"
#include "Objet.h"

class CommandeSaisir : protected CommandeRobot {
private:
	Objet* obj;

public:
	virtual bool reversible();
	virtual void desexecute();
	virtual void execute();
};

#endif
