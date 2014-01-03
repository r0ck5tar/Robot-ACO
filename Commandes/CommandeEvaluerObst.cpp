#include <string>
using namespace std;

#include "CommandeEvaluerObst.h"

bool CommandeEvaluerObst::reversible() {
	return false;
}

void CommandeEvaluerObst::desexecute() {}

void CommandeEvaluerObst::execute() {
	this->robot->evaluerObstacle();
}

