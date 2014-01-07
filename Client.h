#ifndef CLIENT_H
#define CLIENT_H

#include "Robot.h"
#include "Commandes/CommandeRobot.h"
#include "Invocateur.h"
#include <string>
#include <stdlib.h>
using namespace std;

class Client {
public:
	Client (Invocateur i, Robot *r): invocateur(i), robot(r) {};
	void lireCommande();
	int lireX();
	int lireY();
	string lireDirection();
	string lireNomMacro();
	string lireNomCommande();
	Robot* getRobot();
	
private:
	Invocateur invocateur;
	Robot *robot;
	string entreeUtilisateur;
	

};

#endif
