#include <string>
using namespace std;

#include "CommandeRepartir.h"

bool CommandeRepartir::reversible() {
	return true;
}

void CommandeRepartir::desexecute() {
	this->robot->figer();
}

void CommandeRepartir::execute() {
	this->robot->repartir();
}

