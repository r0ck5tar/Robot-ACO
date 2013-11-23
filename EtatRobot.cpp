#include "EtatRobot.h"

void EtatRobot :: avancer() {
    throw ActionImpossible();
}

void EtatRobot :: tourner(string direction) {
    throw ActionImpossible();
}

void EtatRobot :: saisir(Objet o) {
    throw ActionImpossible();   
}

void EtatRobot:: poser() {
    throw ActionImpossible();   
}

int EtatRobot :: peser() {
    throw ActionImpossible();   
}

void EtatRobot :: rencontrerObstacle(Obstacle o) {
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

