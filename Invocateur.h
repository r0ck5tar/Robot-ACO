#ifndef INVOCATEUR_H
#define INVOCATEUR_H

#include "Commandes/Commande.h"
#include <vector>
#include <string>
using namespace std;

class Invocateur {
private:
	static vector<Commande*> commandesEffectuees;
	
public:
	void execute(Commande* cmd);
	void desexecute();
	
};


#endif
