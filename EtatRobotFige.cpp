#include "EtatRobot.h"
#include "Robot.h"

class EtatRobotFige : public EtatRobot {
    public:
    void afficher();
    void repartir();

    private:
    EtatRobot etatPrecedent;
};


    void EtatRobotFige::afficher() {
        //todo
    }

    void EtatRobotFige::repartir() {
        robot->changerEtat(etatPrecedent);
    }
