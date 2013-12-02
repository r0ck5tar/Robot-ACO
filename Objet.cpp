#include "Objet.h"

Objet::Objet(int p) : poids(p) {}

int Objet::getPoids(){
	return this->poids;
}

void Objet::setPoids(int p){
	this->poids = p;
}
