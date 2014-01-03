#include <string>
using namespace std;

#include "CommandeRencontrerObst.h"

void CommandeAvancer::execute() {
	this->robot->rencontrerObstacle(obst);
}

