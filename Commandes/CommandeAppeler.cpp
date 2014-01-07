#include "CommandeAppeler.h"
#include "CommandeMacro.h"
#include <iostream>

CommandeAppeler CommandeAppeler::cmd("appeler");

CommandeAppeler::CommandeAppeler(string nomCommande) : CommandeRobot(nomCommande) {
}

bool CommandeAppeler::reversible() {
	return false;
}

void CommandeAppeler::execute() {
	if(CommandeMacro::getMacrosEnregistres()[nomMacro]) {
		cout<<"Macro "<<nomMacro<<" trouvé"<<endl;
		CommandeMacro *macro = CommandeMacro::getMacrosEnregistres()[nomMacro];
		
		vector<CommandeRobot*> commandesDuMacro = macro->getListeCommandes();
		
		for (int i=0; i<commandesDuMacro.size(); ++i) {
			commandesDuMacro[i]->execute();
		}
	}
	
	else throw "Macro non trouvé";
}

CommandeAppeler * CommandeAppeler::constructeurVirtuel(Client *client) {
	
	CommandeAppeler *c = new CommandeAppeler();
	c->nomMacro = client->lireNomMacro();
	
	return c;
}
