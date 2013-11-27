#include "Robot.h"
#include "EtatRobot.h"
#include "EtatRobotFige.h"
#include "EtatRobotAVide.h"
#include "Position.h"
#include "Obstacle.h"
#include "Objet.h"
#include "Position.h"
#include <string>
#include <iostream>

using namespace std;

Robot::Robot(string d ) : direction(d), position(new Position(0, 0)) {
	affichage = new AffichageRobot(this);
	EtatRobotFige::instance();
	EtatRobotAVide::instance();
	changerEtat("AVide");
}

void Robot::changerEtat(string nomEtat){
	this->etat = etat->getEtat(nomEtat);
	this->affichage->notifier();
}

void Robot::avancer(int x, int y){
	try {
		this->etat->avancer();
		this->position->setx(x);
		this->position->sety(y);
	}catch(EtatRobot::ActionImpossible){
		cout << "action impossible" << endl;
	}
}

void Robot::tourner(string direction){
	this->etat->tourner();
}

void Robot::saisir(Objet o){
	this->etat->saisir();
}

void Robot::poser(){
	this->etat->poser();
}

int Robot::peser(){
	return this->etat->peser();
}
	
void Robot::rencontrerObstacle(Obstacle o){
	this->etat->rencontrerObstacle();
}

int Robot::evaluerObstacle(){
	return this->etat->evaluerObstacle();
}
	
void Robot::figer(){
	this->etat->figer();
}

void Robot::repartir() {
	this->etat->repartir();
}

EtatRobot* Robot::getEtat(){
	return this->etat;
}

AffichageRobot* Robot::getAffichage(){
	return this->affichage;
}


