#include "EtatRobot.h"
#include "Robot.h"
#include "Obstacle.h"

class EtatRobotAVide : protected EtatRobotEnRoute {
public:
	void tourner(string direction);
	void avancer();
	void rencontrerObstacle(Obstacle o);
};



