#include "CommandeMacro.h"
#include <iostream>

CommandeMacro CommandeMacro::cmd("defmacro");
map<string, CommandeMacro *> CommandeMacro::macrosEnregistres;


CommandeMacro::CommandeMacro(string nomCommande) : CommandeRobot(nomCommande) {
}

void CommandeMacro::execute() {
	string nomCommande;
	while((nomCommande = client->lireNomCommande()) != "finmacro") {
		try{
			CommandeRobot *cmd = static_cast<CommandeRobot *>(Commande::creerCommande(nomCommande, this->client));
			cmd->setRobot(this->robot);
			listeCommandes.push_back(cmd);
		} catch (Commande::CommandeIndisponible) {
			cout<<"Commande indisponible"<<endl;
		}
	}
}

bool CommandeMacro::reversible() {
	return true;
}

void CommandeMacro::desexecute() {
	macrosEnregistres.erase(this->nomMacro);
}


CommandeMacro * CommandeMacro::constructeurVirtuel(Client *client) {
	
	CommandeMacro *c = new CommandeMacro();
	c->nomMacro = client->lireNomMacro();
	c->client = client;
	c->robot = client->getRobot();
	macrosEnregistres[c->nomMacro] = c;

	
	return c;
}
