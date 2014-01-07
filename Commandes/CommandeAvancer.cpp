#include "CommandeAvancer.h"

CommandeAvancer CommandeAvancer::cmd("avancer");

CommandeAvancer::CommandeAvancer(string nomCommande) : CommandeRobot(nomCommande) {
}

void CommandeAvancer::execute() {
	
	this->xPrecedent = this->robot->getX();
	this->yPrecedent = this->robot->getY();
	
	robot->avancer(x, y);
}

bool CommandeAvancer::reversible() {
	return true;
}

void CommandeAvancer::desexecute() {
	robot->avancer(this->xPrecedent, this->yPrecedent);
}

CommandeAvancer * CommandeAvancer::constructeurVirtuel(Client *client) {
	
	CommandeAvancer *c = new CommandeAvancer();
	
	c->x = client->lireX();
	c->y = client->lireY();
	
	return c;
}
