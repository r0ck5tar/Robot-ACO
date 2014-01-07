#include "Invocateur.h"

vector<Commande*> Invocateur::commandesEffectuees = vector<Commande*>();

void Invocateur::execute(Commande *cmd) {
	try {
		cmd->execute();
		if(cmd->reversible()) {
			commandesEffectuees.push_back(cmd);
		}
	} catch (const char* err) {
		throw;
	}catch(...) {} 
}

void Invocateur::desexecute() {
	if(not commandesEffectuees.empty()) {
		commandesEffectuees.back()->desexecute();
		commandesEffectuees.pop_back();
	}
	
	else {
		throw "Rien à desexecuter";
	}
}
