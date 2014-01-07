#include "Commande.h"
#include <iostream>

map<string, Commande *> Commande::commandesDisponibles;

Commande::Commande(string nomCommande) {
	commandesDisponibles[nomCommande] = this;
} 

void Commande::execute() {
    throw CommandeIndisponible();  
}

void Commande::desexecute() {
    throw CommandeIndisponible();   
}

bool Commande::reversible() {
    throw CommandeIndisponible(); 
}

Commande* Commande::creerCommande(string nomCommande, Client *client) {
	if (commandesDisponibles.count(nomCommande) >0 ) {
		return commandesDisponibles[nomCommande]->constructeurVirtuel(client);
	}
	
	else {
		throw CommandeIndisponible();
	}
}

Commande * Commande::constructeurVirtuel(Client *client) {
	throw CommandeIndisponible();
}



