#include "CommandeFiger.h"
#include <iostream>

using namespace std;

CommandeFiger CommandeFiger::cmd("figer");

CommandeFiger::CommandeFiger(string nomCommande) : CommandeRobot(nomCommande) {
}

void CommandeFiger::execute() {
	
	robot->figer();
}

bool CommandeFiger::reversible() {
	return true;
}

void CommandeFiger::desexecute() {
	robot->repartir();
}

CommandeFiger * CommandeFiger::constructeurVirtuel(Client *client) {
	CommandeFiger *c = new CommandeFiger();
	
	return c;
}
