#include <string>
using namespace std;

#include "CommandeFiger.h"

bool CommandeFiger::reversible() {
	return true;
}

void CommandeFiger::desexecute() {
	this->robot->repartir();
}

void CommandeFiger::execute() {
	this->robot->figer();
}

