#ifndef ROBOT_H
#define ROBOT_H

#include "EtatRobot.h"
#include "Position.h"
#include "Obstacle.h"
#include "Objet.h"
#include <string>
using namespace std;

class Robot {
private:
	string direction;
	Position *position;
	Obstacle *obstacle;
	Objet *objet;
	EtatRobot *etat;

public:
	Robot(string direction, EtatRobot *etat);	

	void avancer(int x, int y);
	void tourner(string direction);
	void saisir(Objet o);
	void poser();
	int peser();
	void rencontrerObstacle(Obstacle o);
	int evaluerObstacle();
	void figer();
	void repartir();
	//void afficher();
	
	void changerEtat(EtatRobot *e);
	EtatRobot* getEtat();
};

#endif
