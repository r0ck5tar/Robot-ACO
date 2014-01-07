#ifndef ROBOT_H
#define ROBOT_H

#include "AffichageRobot.h"
#include "Etats/EtatRobot.h"
#include "Position.h"
#include "Obstacle.h"
#include "Objet.h"
#include <string>
using namespace std;

class Robot {
private:
	AffichageRobot *affichage;
	string direction;
	Position *position;
	Obstacle *obstacle;
	Objet *objet;
	EtatRobot *etat;
	

public:
	Robot(string direction = "E");	

	void avancer(int x, int y);
	void tourner(string direction);
	void saisir(Objet *o);
	void poser();
	int peser();
	void rencontrerObstacle(Obstacle o);
	int evaluerObstacle();
	void figer();
	void repartir();
	
	void changerEtat(string nomEtat);
	int getX();
	int getY();
	EtatRobot* getEtat();
	Objet* getObjet();
	string getDirection();
	AffichageRobot* getAffichage();
};

#endif
