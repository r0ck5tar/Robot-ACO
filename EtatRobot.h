#ifndef ROBOT_ETAT_H
#define ROBOT_ETAT_H

#include <string>
#include "Robot.h"
#include "Objet.h"
#include "Obstacle.h"


using namespace std;

class Robot;

class EtatRobot{
    public:
    void afficher();
    void avancer();
    void tourner(string direction);
    void saisir(Objet o);
    void poser();
    int peser();
    void rencontrerObstacle(Obstacle o);
    int evaluerObstacle();
    void figer();
    void repartir();
    
    class ActionImpossible{};
    
    protected:
    Robot* robot;
};

#endif
