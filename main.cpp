#include <iostream>
#include "Robot.h"
#include "Client.h"
#include "Invocateur.h"

using namespace std;

int main(int argc, char *argv[])
{
	Robot robot;
	Obstacle obs(5);
	Objet obj(10);
	
	Invocateur invocateur;
	Client console(invocateur, &robot);
	
	while(true) {
		console.lireCommande();
	}

	
	return 0;
}
