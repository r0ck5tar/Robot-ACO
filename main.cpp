#include <iostream>
#include "Robot.h"

using namespace std;

int main(int argc, char *argv[])
{
	Robot robot;
	robot.avancer(3, 4);
	//robot.repartir();
	robot.figer();
	robot.figer();
	robot.avancer(6, 7);
	robot.repartir();
	robot.avancer(10, 5);
    robot.repartir();
    return 0;
}
