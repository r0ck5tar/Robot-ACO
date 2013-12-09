#include <string>
using namespace std;

#include "CommandeAvancer.h"

bool CommandeAvancer::reversible() {
	return true;
}

void CommandeAvancer::desexecute() {
	this->robot->avancer(this->x0, this->y0);
}

void CommandeAvancer::execute() {
	this->x0 = this->robot->getx();
	this->y0 = this->robot->gety();
	this->robot->avancer(this->x, this->y);
}

