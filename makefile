CC = g++
CFLAGS = -Wall -g

<<<<<<< HEAD
Etats = $(addprefix obj/, EtatRobot.o EtatRobotFige.o EtatRobotEnRoute.o EtatRobotAVide.o EtatRobotAVideFaceObstacle.o EtatRobotEnCharge.o EtatRobotEnChargeFaceObstacle.o)

Output = -o $@

all : makedir $(addprefix obj/, Robot.o AffichageRobot.o AffichageConsole.o Commande.o) $(Etats) $(addprefix obj/, Objet.o Obstacle.o Position.o main.o) 
	${CC} ${CFLAGS} $(addprefix obj/, Robot.o AffichageRobot.o AffichageConsole.o Commande.o) $(Etats)  $(addprefix obj/, Objet.o Obstacle.o Position.o main.o) -o SimRobot 
	
makedir : 
	$(shell mkdir -p obj)
	
=======
all : Robot.o AffichageRobot.o AffichageConsole.o Commande.o CommandeAvancer.o CommandePeser.o CommandePoser.o CommandeTourner.o CommandeSaisir.o CommandeEvaluerObst.o CommandeRepartir.o CommandeFiger.o EtatRobot.o EtatRobotFige.o EtatRobotEnRoute.o EtatRobotAVide.o EtatRobotAVideFaceObstacle.o EtatRobotEnCharge.o EtatRobotEnChargeFaceObstacle.o Objet.o Obstacle.o Position.o main.o 
	${CC} ${CFLAGS} Robot.o AffichageRobot.o AffichageConsole.o Commande.o  CommandeAvancer.o CommandePeser.o CommandePoser.o CommandeTourner.o CommandeSaisir.o CommandeEvaluerObst.o CommandeRepartir.o CommandeFiger.o EtatRobotFige.o EtatRobotEnRoute.o EtatRobot.o EtatRobotAVide.o EtatRobotAVideFaceObstacle.o EtatRobotEnCharge.o EtatRobotEnChargeFaceObstacle.o Objet.o Obstacle.o Position.o main.o -o SimRobot
>>>>>>> 0f89d2d7248196fc7b0e555b691bf7a9492b503c
	
obj/Robot.o : Robot.cpp 
	${CC} ${CFLAGS} -c Robot.cpp $(Output)
	
obj/AffichageRobot.o : AffichageRobot.cpp AffichageRobot.h
	${CC} ${CFLAGS} -c AffichageRobot.cpp $(Output)
	
obj/AffichageConsole.o : AffichageConsole.cpp
	${CC} ${CFLAGS} -c AffichageConsole.cpp $(Output)
	
obj/Commande.o : Commande.cpp
	${CC} ${CFLAGS} -c Commande.cpp $(Output) 

<<<<<<< HEAD
obj/EtatRobot.o : Etats/EtatRobot.cpp
	${CC} ${CFLAGS} -c Etats/EtatRobot.cpp $(Output)
=======
CommandeAvancer.o : CommandeAvancer.cpp
	${CC} ${CFLAGS} -c CommandeAvancer.cpp

CommandePeser.o : CommandePeser.cpp
	${CC} ${CFLAGS} -c CommandePeser.cpp

CommandePoser.o : CommandePoser.cpp
	${CC} ${CFLAGS} -c CommandePoser.cpp

CommandeTourner.o : CommandeTourner.cpp
	${CC} ${CFLAGS} -c CommandeTourner.cpp

CommandeSaisir.o : CommandeSaisir.cpp
	${CC} ${CFLAGS} -c CommandeSaisir.cpp

CommandeEvaluerObst.o : CommandeEvaluerObst.cpp
	${CC} ${CFLAGS} -c CommandeEvaluerObst.cpp

CommandeRepartir.o : CommandeRepartir.cpp
	${CC} ${CFLAGS} -c CommandeRepartir.cpp


CommandeFiger.o : CommandeFiger.cpp
	${CC} ${CFLAGS} -c CommandeFiger.cpp

EtatRobot.o : EtatRobot.cpp 
	${CC} ${CFLAGS} -c EtatRobot.cpp
>>>>>>> 0f89d2d7248196fc7b0e555b691bf7a9492b503c
	
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
	
obj/main.o : main.cpp
	${CC} ${CFLAGS} -c main.cpp $(Output)

clean :
	rm -f -R obj
	rm SimRobot

