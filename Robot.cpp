#include <string>
using namespace std;

#include "Robot.h"
#include "EtatRobot.h"
#include "Position.h"
#include "Objet.h"
#include "Obstacle.h"

Robot::Robot(string d, EtatRobot *e) : direction(d), etat(e) {}

void Robot::changerEtat(EtatRobot etat){
	this->etat = &etat;
}

EtatRobot* Robot::getEtat(){
	return this->etat;
}

void Robot::avancer(){
	this->etat->avancer();
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

/*void Robot::afficher(){
	this->etat->afficher;
}*/


