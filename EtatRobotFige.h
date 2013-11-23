#ifndef ETAT_ROBOT_FIGE_H
#define ETAT_ROBOT_FIGE_H

#include "EtatRobot.h"

class EtatRobotFige : public EtatRobot {
    public:
    EtatRobotFige(EtatRobot *etatPrecedent);
    void afficher();
    void repartir();
   
	private:
    EtatRobot etatPrecedent;
};

#endif
