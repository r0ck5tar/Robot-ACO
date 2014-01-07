#ifndef COMMANDE_MACRO_H
#define COMMANDE_MACRO_H

#include "CommandeRobot.h"
#include "../Robot.h"
#include "../Client.h"
#include <vector>
#include <map>

using namespace std;


class CommandeMacro : protected CommandeRobot {
public:
	virtual void execute();
	virtual bool reversible();
	virtual void desexecute();
	static map<string, CommandeMacro*> getMacrosEnregistres() {
		return macrosEnregistres;	
	}
	vector<CommandeRobot*> getListeCommandes() {
		return listeCommandes;
	}
	
	CommandeMacro() : CommandeRobot() {};
	
protected:
	virtual CommandeMacro * constructeurVirtuel(Client *client);
	
private:
	CommandeMacro(string nomCommande);
	static CommandeMacro cmd;
	static map<string, CommandeMacro*> macrosEnregistres;
	vector<CommandeRobot*> listeCommandes;
	string nomMacro;
	Client *client;
	Robot *robot;
};

#endif
