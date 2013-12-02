#include <iostream>
#include "Robot.h"

using namespace std;

int main(int argc, char *argv[])
{
	Robot robot;
	Obstacle obs(5);
	Objet obj(10);
	robot.avancer(3, 4);
	robot.repartir();
	robot.figer();
	robot.figer();
	robot.avancer(6, 7);
	robot.repartir();
	robot.avancer(10, 5);
    	robot.repartir();
    	robot.rencontrerObstacle(obs);
	robot.saisir(&obj);
	robot.tourner("O");
	robot.figer();
	return 0;
}
