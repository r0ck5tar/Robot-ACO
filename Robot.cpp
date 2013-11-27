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

Robot::Robot(string d ) : direction(d), position(new Position(0, 0)), etat(0) {
	affichage = new AffichageRobot(this);
	EtatRobotFige::instance()->setRobot(this);
	EtatRobotAVide::instance()->setRobot(this);
	changerEtat("AVide");
}

void Robot::changerEtat(string nomEtat){
    cout<<"\nMethode changerEtat() de la classe Robot - ";
    if(etat!=0){cout<<"Changer de "<<etat-> getNomEtat()<<" a "<<nomEtat<<endl;}
    else {cout<<"Initialisation a l'etat "<<nomEtat<<endl;}
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

AffichageRobot* Robot::getAffichage(){
	return this->affichage;
}


