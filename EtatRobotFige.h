#ifndef ETAT_ROBOT_FIGE_H
#define ETAT_ROBOT_FIGE_H

#include "EtatRobot.h"

class EtatRobotFige : public EtatRobot {
    public:
	static EtatRobotFige* instance();
	void setEtatPrecedent(EtatRobot*);
    void afficher();
    void repartir();
   
	private:
    EtatRobot *etatPrecedent;
	EtatRobotFige(){ }; //constructeur privé
	EtatRobotFige(const EtatRobotFige&); //surchage en privé pour éviter la construction de copie
	void operator=(const EtatRobotFige&); //surchage en privé pour éviter la copie par affectation
};

#endif
