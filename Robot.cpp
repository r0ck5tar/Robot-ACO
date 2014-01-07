#include "Robot.h"
#include "Etats/EtatRobot.h"
#include "Etats/EtatRobotFige.h"
#include "Etats/EtatRobotAVide.h"
#include "Etats/EtatRobotAVideFaceObstacle.h"
#include "Etats/EtatRobotEnCharge.h"
#include "Etats/EtatRobotEnChargeFaceObstacle.h"
#include "Position.h"
#include "Obstacle.h"
#include "Objet.h"
#include "Position.h"
#include <string>
#include <iostream>

using namespace std;

Robot::Robot(string d ) : direction(d), position(new Position(0, 0)),  objet(0), etat(0) {
	affichage = new AffichageRobot(this);
	EtatRobotFige::instance()->setRobot(this);
	EtatRobotAVide::instance()->setRobot(this);
	EtatRobotAVideFaceObstacle::instance()->setRobot(this);
	EtatRobotEnCharge::instance()->setRobot(this);
	EtatRobotEnChargeFaceObstacle::instance()->setRobot(this);
	changerEtat("AVide");
}

void Robot::changerEtat(string nomEtat){
	EtatRobot *nouvelEtat = EtatRobot::getEtat(nomEtat);
	this->etat = nouvelEtat;
	this->affichage->notifier();
}

void Robot::avancer(int x, int y){
    
	try {
		this->etat->avancer();
		this->position->setx(x);
		this->position->sety(y);
		this->affichage->notifier();
	}catch(EtatRobot::ActionImpossible){
		cout << "action impossible" << endl;
		throw;
	}
}

void Robot::tourner(string d){

	try {
		this->etat->tourner();
		this->direction = d; 
		this->affichage->notifier();
	}catch(EtatRobot::ActionImpossible){
		cout << "action impossible" << endl;
		throw;
	}
}

void Robot::saisir(Objet *o){
	  cout<<"\nMethode saisir(Objet) de la classe Robot : ";
	try {
		this->etat->saisir();
		this->objet = o;
		this->affichage->notifier();
	}catch(EtatRobot::ActionImpossible){
		cout << "action impossible" << endl;
		throw;
	}
}

void Robot::poser(){
	this->etat->poser();
}

int Robot::peser(){
	this->etat->peser();
	return 0;
}
	
void Robot::rencontrerObstacle(Obstacle o){
	this->etat->rencontrerObstacle();
}

int Robot::evaluerObstacle(){
	this->etat->evaluerObstacle();
	return 0;
}
	
void Robot::figer(){
    try{
        this->etat->figer();
    } catch (EtatRobot::ActionImpossible){
        cout << "action impossible" << endl;
        throw;
    }
}

void Robot::repartir() {
    try{
	   this->etat->repartir();
	} catch (EtatRobot::ActionImpossible){
        cout << "action impossible" << endl;
        throw;
    }
}

int Robot::getX(){
	return this->position->getx();
}

int Robot::getY(){
	return this->position->gety();
}

EtatRobot* Robot::getEtat(){
	return this->etat;
}

Objet* Robot::getObjet(){
	return this->objet;
}

string Robot::getDirection(){
	return this->direction;
}

AffichageRobot* Robot::getAffichage(){
	return this->affichage;
}


