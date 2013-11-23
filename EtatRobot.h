#ifndef ETAT_ROBOT_H
#define ETAT_ROBOT_H

#include <string>
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
