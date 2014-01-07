#ifndef COMMANDE_H
#define COMMANDE_H

#include <string>
#include <vector>
#include <map>

using namespace std;

class Client;

class Commande {

public:
	class CommandeIndisponible {};
		
	~Commande() {};

	virtual void execute() = 0;	
	virtual void desexecute() = 0;
	virtual bool reversible() = 0;
		
	static Commande * creerCommande(string nomCommande, Client *client);
	
protected:
	Commande(string nomCommande); 
	
	Commande() {};
	
	virtual Commande * constructeurVirtuel(Client *client);
	
private:
	static map<string, Commande*> commandesDisponibles;
};

#endif
