#ifndef _AFFICHAGE_ROBOT_H_
#define _AFFICHAGE_ROBOT_H_

#include "InterfaceAffichage.h"

#include <vector>

using namespace std;

class Robot;

class AffichageRobot
{

private:
	Robot* robot;
	vector<InterfaceAffichage*> afficheurs;

public:
	AffichageRobot(Robot*);

	void attacherAfficheur(InterfaceAffichage*);
	void detacherAfficheur();
	void notifier();

};

#endif

