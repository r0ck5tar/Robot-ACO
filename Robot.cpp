#include "Robot.h"
#include "EtatRobot.h"
#include "Position.h"
#include "Obstacle.h"
#include "Objet.h"
#include <string>
#include <iostream>

using namespace std;

Robot::Robot(string d, EtatRobot *e) : direction(d), etat(e){
	affichage = new AffichageRobot(this);
}

void Robot::changerEtat(EtatRobot *etat){
	this->etat = etat;
	this->affichage->notifier();
}

void Robot::avancer(int x, int y){
	try {
		this->etat->avancer();
		this->position->setx(this->position->getx()+x);
		this->position->sety(this->position->gety()+y);
	}catch(EtatRobot::ActionImpossible){
		cout << "action impossible" << endl;
	}
}

void Robot::tourner(string direction){
	this->etat->tourner(direction);
}

void Robot::saisir(Objet o){
	this->etat->saisir(o);
}

void Robot::poser(){
	this->etat->poser();
}

int Robot::peser(){
	return this->etat->peser();
}
	
void Robot::rencontrerObstacle(Obstacle o){
	this->etat->rencontrerObstacle(o);
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


