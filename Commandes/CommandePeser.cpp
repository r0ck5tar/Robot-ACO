#include "CommandePeser.h"
#include <iostream>

using namespace std;

CommandePeser CommandePeser::cmd("peser");

CommandePeser::CommandePeser(string nomCommande) : CommandeRobot(nomCommande) {
}

void CommandePeser::execute() {
	
	robot->peser();
}

bool CommandePeser::reversible() {
	return false;
}

void CommandePeser::desexecute() {
	
}

CommandePeser * CommandePeser::constructeurVirtuel(Client *client) {

	CommandePeser *c = new CommandePeser();
	
	return c;
}
