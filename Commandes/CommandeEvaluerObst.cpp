#include "CommandeEvaluerObst.h"
#include <iostream>

using namespace std;

CommandeEvaluerObst CommandeEvaluerObst::cmd("evaluerObst");

CommandeEvaluerObst::CommandeEvaluerObst(string nomCommande) : CommandeRobot(nomCommande) {
}

void CommandeEvaluerObst::execute() {
	
	robot->evaluerObstacle();
}

bool CommandeEvaluerObst::reversible() {
	return false;
}

void CommandeEvaluerObst::desexecute() {
	
}

CommandeEvaluerObst * CommandeEvaluerObst::constructeurVirtuel(Client *client) {
	
	CommandeEvaluerObst *c = new CommandeEvaluerObst();
	
	return c;
}
