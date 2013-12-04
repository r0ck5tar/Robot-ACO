#ifndef _COMMANDE_H
#define _COMMANDE_H

#include <map>
#include <string>

using namespace std;

class Commande {
public:
	virtual void execute() = 0;
	virtual void desexecute() = 0;
	virtual bool reversible() = 0;
	
private:
	static map<string, Commande*> commandes;
};

#endif