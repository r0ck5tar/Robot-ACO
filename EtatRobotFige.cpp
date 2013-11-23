#include "EtatRobot.h"
#include "Robot.h"

class EtatRobotFige : public EtatRobot {
    public:
    EtatRobotFige(EtatRobot *etatPrecedent);
    void afficher();
    void repartir();
    private:
    EtatRobot etatPrecedent;
};

    EtatRobotFige::EtatRobotFige(EtatRobot *e)  { 
	etatPrecedent = e;
    }

    void EtatRobotFige::afficher() {
        //todo
    }

    void EtatRobotFige::repartir() {
        this->robot->changerEtat(etatPrecedent);
    }
