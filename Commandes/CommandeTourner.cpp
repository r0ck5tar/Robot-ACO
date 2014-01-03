#include <string>
using namespace std;

#include "CommandeTourner.h"

bool CommandeTourner::reversible() {
	return true;
}

void CommandeTourner::desexecute() {
	this->robot->tourner(oldDirection);
}

void CommandeTourner::execute() {
	this->oldDirection = this->robot->getDirection();
	this->robot->tourner(direction);
}

