#include "CommandeTourner.h"
#include <iostream>

using namespace std;

CommandeTourner CommandeTourner::cmd("tourner");

CommandeTourner::CommandeTourner(string nomCommande) : CommandeRobot(nomCommande) {
}

void CommandeTourner::execute() {
	
	this->directionPrecedent = this->robot->getDirection();
	
	robot->tourner(this->direction);
}

bool CommandeTourner::reversible() {
	return true;
}

void CommandeTourner::desexecute() {
	robot->tourner(this->directionPrecedent);
}

CommandeTourner * CommandeTourner::constructeurVirtuel(Client *client) {
	//cout<<"création d'une commande TOURNER"<<endl;
	
	CommandeTourner *c = new CommandeTourner();
	
	c->direction = client->lireDirection();
	
	return c;
}
