#include "EtatRobot.h"
#include "EtatRobotAVide.h"
#include "EtatRobotFige.h"

#include <iostream>

using namespace std;

map<string, EtatRobot*> EtatRobot::etats = map<string, EtatRobot*>();

EtatRobot::EtatRobot(string nomEtat) : nomEtat(nomEtat) {
	etats[nomEtat] = this;
}

void EtatRobot :: avancer() {
    throw ActionImpossible();
}

void EtatRobot :: tourner() {
    throw ActionImpossible();
}

void EtatRobot :: saisir() {
    throw ActionImpossible();   
}

void EtatRobot:: poser() {
    throw ActionImpossible();   
}

int EtatRobot :: peser() {
    throw ActionImpossible();   
}

void EtatRobot :: rencontrerObstacle() {
    throw ActionImpossible();   
}

int EtatRobot :: evaluerObstacle() {
    throw ActionImpossible();
}

void EtatRobot :: figer() {
    throw ActionImpossible();   
}

void EtatRobot :: repartir() {
    throw ActionImpossible();   
}

EtatRobot* EtatRobot::getEtat(string etat) {
	return etats[etat];
}

string EtatRobot::getNomEtat() {
    return nomEtat;   
}

void EtatRobot::setRobot(Robot *r) {
	this->robot = r;
}
