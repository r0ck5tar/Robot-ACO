#include "CommandeRepartir.h"
#include <iostream>

using namespace std;

CommandeRepartir CommandeRepartir::cmd("repartir");

CommandeRepartir::CommandeRepartir(string nomCommande) : CommandeRobot(nomCommande) {
}

void CommandeRepartir::execute() {
	
	robot->repartir();
}

bool CommandeRepartir::reversible() {
	return true;
}

void CommandeRepartir::desexecute() {
	robot->figer();
}

CommandeRepartir * CommandeRepartir::constructeurVirtuel(Client *client) {
	CommandeRepartir *c = new CommandeRepartir();
	
	return c;
}
