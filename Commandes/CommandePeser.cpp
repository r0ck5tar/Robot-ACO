#include <string>
using namespace std;

#include "CommandePeser.h"

bool CommandePeser::reversible() {
	return false;
}

void CommandePeser::desexecute() {}

void CommandePeser::execute() {
	this->robot->peser();
}

