#ifndef ROBOT_H
#define ROBOT_H

#include <string>
using namespace std;

class EtatRobot;
#include "EtatRobot.h"
#include "Objet.h"
#include "Obstacle.h"
#include "Position.h"

class Robot {
private:
	string direction;
	EtatRobot *etat;

public:
	Robot(string direction,EtatRobot *etat);
	void changerEtat(EtatRobot e);
	
	void avancer();
	void tourner(string direction);

	void saisir(Objet o);
	void poser();
	int peser();
	
	void rencontrerObstacle(Obstacle o);
	int evaluerObstacle();
	
	void figer();
	void repartir();
	//void afficher();
};

#endif
