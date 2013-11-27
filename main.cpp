#include <iostream>
#include "Robot.h"

using namespace std;

int main(int argc, char *argv[])
{
	Robot robot;
	robot.avancer(3, 4);
	robot.figer();
	robot.figer();
	robot.avancer(6, 7);
	robot.repartir();

    return 0;
}
