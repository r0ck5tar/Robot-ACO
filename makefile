CC = g++
CFLAGS = -Wall -g

Etats = $(addprefix obj/, EtatRobot.o EtatRobotFige.o EtatRobotEnRoute.o EtatRobotAVide.o EtatRobotAVideFaceObstacle.o EtatRobotEnCharge.o EtatRobotEnChargeFaceObstacle.o)

Commandes = $(addprefix obj/, Commande.o CommandeRobot.o CommandeAvancer.o CommandeTourner.o CommandeFiger.o CommandeRepartir.o CommandeMacro.o CommandeAppeler.o)

Output = -o $@

all : makedir $(addprefix obj/, Robot.o AffichageRobot.o AffichageConsole.o) $(Etats) $(Commandes) $(addprefix obj/, Objet.o Obstacle.o Position.o Invocateur.o Client.o main.o)
	${CC} ${CFLAGS} $(addprefix obj/, Robot.o AffichageRobot.o AffichageConsole.o) $(Etats) $(Commandes) $(addprefix obj/, Objet.o Obstacle.o Position.o Invocateur.o Client.o main.o) -o SimRobot 

makedir : 
	$(shell mkdir -p obj)

obj/Robot.o : Robot.cpp 
	${CC} ${CFLAGS} -c Robot.cpp $(Output)

obj/AffichageRobot.o : AffichageRobot.cpp AffichageRobot.h
	${CC} ${CFLAGS} -c AffichageRobot.cpp $(Output)

obj/AffichageConsole.o : AffichageConsole.cpp
	${CC} ${CFLAGS} -c AffichageConsole.cpp $(Output)

obj/Commande.o : Commandes/Commande.cpp
	${CC} ${CFLAGS} -c Commandes/Commande.cpp $(Output)

obj/CommandeRobot.o : Commandes/CommandeRobot.cpp
	${CC} ${CFLAGS} -c Commandes/CommandeRobot.cpp $(Output)

obj/CommandeAvancer.o : Commandes/CommandeAvancer.cpp
	${CC} ${CFLAGS} -c Commandes/CommandeAvancer.cpp $(Output)

obj/CommandeTourner.o : Commandes/CommandeTourner.cpp
	${CC} ${CFLAGS} -c Commandes/CommandeTourner.cpp $(Output)

obj/CommandeFiger.o : Commandes/CommandeFiger.cpp
	${CC} ${CFLAGS} -c Commandes/CommandeFiger.cpp $(Output)

obj/CommandeRepartir.o : Commandes/CommandeRepartir.cpp
	${CC} ${CFLAGS} -c Commandes/CommandeRepartir.cpp $(Output)

obj/CommandeMacro.o : Commandes/CommandeMacro.cpp
	${CC} ${CFLAGS} -c Commandes/CommandeMacro.cpp $(Output)

obj/CommandeAppeler.o : Commandes/CommandeAppeler.cpp
	${CC} ${CFLAGS} -c Commandes/CommandeAppeler.cpp $(Output)

obj/EtatRobot.o : Etats/EtatRobot.cpp
	${CC} ${CFLAGS} -c Etats/EtatRobot.cpp $(Output)

obj/EtatRobotFige.o : Etats/EtatRobotFige.cpp  
	${CC} ${CFLAGS} -c Etats/EtatRobotFige.cpp $(Output)

obj/EtatRobotEnRoute.o : Etats/EtatRobotEnRoute.cpp  
	${CC} ${CFLAGS} -c Etats/EtatRobotEnRoute.cpp $(Output)

obj/EtatRobotAVide.o : Etats/EtatRobotAVide.cpp 
	${CC} ${CFLAGS} -c  Etats/EtatRobotAVide.cpp $(Output)

obj/EtatRobotAVideFaceObstacle.o : Etats/EtatRobotAVideFaceObstacle.cpp 
	${CC} ${CFLAGS} -c  Etats/EtatRobotAVideFaceObstacle.cpp $(Output)

obj/EtatRobotEnCharge.o : Etats/EtatRobotEnCharge.cpp 
	${CC} ${CFLAGS} -c  Etats/EtatRobotEnCharge.cpp $(Output)

obj/EtatRobotEnChargeFaceObstacle.o : Etats/EtatRobotEnChargeFaceObstacle.cpp 
	${CC} ${CFLAGS} -c  Etats/EtatRobotEnChargeFaceObstacle.cpp $(Output)

obj/Objet.o : Objet.cpp 
	${CC} ${CFLAGS} -c Objet.cpp $(Output)

obj/Obstacle.o : Obstacle.cpp 
	${CC} ${CFLAGS} -c Obstacle.cpp $(Output)

obj/Position.o : Position.cpp 
	${CC} ${CFLAGS} -c Position.cpp $(Output)

obj/Invocateur.o : Invocateur.cpp 
	${CC} ${CFLAGS} -c Invocateur.cpp $(Output)

obj/Client.o : Client.cpp 
	${CC} ${CFLAGS} -c Client.cpp $(Output)

obj/main.o : main.cpp
	${CC} ${CFLAGS} -c main.cpp $(Output)

clean :
	rm -f -R obj
	rm -f SimRobot

