#include <string>
using namespace std;

#include "CommandeSaisir.h"

bool CommandeSaisir::reversible() {
	return true;
}

void CommandeSaisir::desexecute() {
	this->robot->poser();
}

void CommandeSaisir::execute() {
	this->robot->saisir(obj);
}

