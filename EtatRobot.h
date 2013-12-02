#ifndef ETAT_ROBOT_H
#define ETAT_ROBOT_H

#include <string>
#include <map>
#include "Objet.h"
#include "Obstacle.h"


using namespace std;

class Robot;

class EtatRobot{

    public:
	EtatRobot() {}
	EtatRobot(string nomEtat);
    virtual void avancer();
    virtual void tourner(); 
    virtual void saisir();
    virtual void poser();
    virtual void peser();
    virtual void rencontrerObstacle();
    virtual void evaluerObstacle();
    virtual void figer();
    virtual void repartir();
	
	virtual void setRobot(Robot *r);
	static EtatRobot* getEtat(string);
	string getNomEtat();
    
    class ActionImpossible{};
    
    protected:
    Robot* robot;
	
	private:
	static map<string, EtatRobot*> etats;
	string nomEtat;
};

#endif
