#include <string>
using namespace std;

#include "CommandePoser.h"

bool CommandePoser::reversible() {
	return true;
}

void CommandePoser::desexecute() {
	Objet *obj = this->robot->getObjet();
	this->robot->saisir(obj);
}

void CommandePoser::execute() {
	this->robot->poser();
}

