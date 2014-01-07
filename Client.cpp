#include "Client.h"
#include <iostream>
using namespace std;

void Client::lireCommande() {
	cout<<"Entrer une commande : ";
	cin>>entreeUtilisateur;
	
	if(entreeUtilisateur == "defaire") {
		try{
			invocateur.desexecute();
		} catch (const char* err) {
			cout<<err<<endl;
		}
	}

	else{
		try{
			CommandeRobot *cmd = static_cast<CommandeRobot *>(Commande::creerCommande(entreeUtilisateur, this));
			cmd->setRobot(this->robot);
			invocateur.execute(cmd);
		} catch (Commande::CommandeIndisponible) {
			cout<<"Commande indisponible"<<endl;
		} catch (const char* err) {
			cout<<err<<endl;
		}
	}
}


int Client::lireX() {
	cout<<"X : ";
	string parametre;
	cin>>parametre;
	
	return atoi(parametre.c_str());
}

int Client::lireY() {
	cout<<"Y : ";
	string parametre;
	cin>>parametre;
	
	return atoi(parametre.c_str());
}

string Client::lireDirection() {
	cout<<"Direction : ";
	string parametre;
	cin>>parametre;
	
	return parametre;
}

string Client::lireNomMacro() {
	cout<<"Nom du macro : ";
	string parametre;
	cin>>parametre;
	
	return parametre;
}

string Client::lireNomCommande() {
	cout<<"Commande à rajouter au macro : ";
	string parametre;
	cin>>parametre;
	
	return parametre;
}

Robot* Client::getRobot() {
	return this->robot;
}
