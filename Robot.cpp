#include "Robot.h"
#include "EtatRobot.h"
#include "EtatRobotFige.h"
#include "EtatRobotAVide.h"
#include "EtatRobotAVideFaceObstacle.h"
#include "EtatRobotEnCharge.h"
#include "EtatRobotEnChargeFaceObstacle.h"
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
    cout<<"\nMethode avancer(int, int) de la classe Robot : ";
	try {
		this->etat->avancer();
		this->position->setx(x);
		this->position->sety(y);
		cout<<"Avance a "<<x<<" "<<y<<endl;
	}catch(EtatRobot::ActionImpossible){
		cout << "action impossible" << endl;
	}
}

void Robot::tourner(string d){
	  cout<<"\nMethode tourner(string) de la classe Robot : ";
	try {
		cout<<"Tourne vers "<<d<<endl;
		this->etat->tourner();
		this->direction = d; 
	}catch(EtatRobot::ActionImpossible){
		cout << "action impossible" << endl;
	}
}

void Robot::saisir(Objet *o){
	  cout<<"\nMethode saisir(Objet) de la classe Robot : ";
	try {
		this->etat->saisir();
		this->objet = o;
	}catch(EtatRobot::ActionImpossible){
		cout << "action impossible" << endl;
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
    cout<<"\nMethode figer() de la classe Robot"<<endl;
    try{
        this->etat->figer();
    } catch (EtatRobot::ActionImpossible){
        cout << "action impossible" << endl;
    }
}

void Robot::repartir() {
    cout<<"\nMethode repartir() de la classe Robot"<<endl;
    try{
	   this->etat->repartir();
	} catch (EtatRobot::ActionImpossible){
        cout << "action impossible" << endl;
    }
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


