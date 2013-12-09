CC = g++
CFLAGS = -Wall -g

all : Robot.o AffichageRobot.o AffichageConsole.o Commande.o CommandeAvancer.o CommandePeser.o CommandePoser.o CommandeTourner.o CommandeSaisir.o CommandeEvaluerObst.o CommandeRepartir.o CommandeFiger.o EtatRobot.o EtatRobotFige.o EtatRobotEnRoute.o EtatRobotAVide.o EtatRobotAVideFaceObstacle.o EtatRobotEnCharge.o EtatRobotEnChargeFaceObstacle.o Objet.o Obstacle.o Position.o main.o 
	${CC} ${CFLAGS} Robot.o AffichageRobot.o AffichageConsole.o Commande.o  CommandeAvancer.o CommandePeser.o CommandePoser.o CommandeTourner.o CommandeSaisir.o CommandeEvaluerObst.o CommandeRepartir.o CommandeFiger.o EtatRobotFige.o EtatRobotEnRoute.o EtatRobot.o EtatRobotAVide.o EtatRobotAVideFaceObstacle.o EtatRobotEnCharge.o EtatRobotEnChargeFaceObstacle.o Objet.o Obstacle.o Position.o main.o -o SimRobot
	
Robot.o : Robot.cpp 
	${CC} ${CFLAGS} -c Robot.cpp
	
AffichageRobot.o : AffichageRobot.cpp AffichageRobot.h
	${CC} ${CFLAGS} -c AffichageRobot.cpp
	
AffichageConsole.o : AffichageConsole.cpp
	${CC} ${CFLAGS} -c AffichageConsole.cpp
	
Commande.o : Commande.cpp
	${CC} ${CFLAGS} -c Commande.cpp

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
	
EtatRobotFige.o : EtatRobotFige.cpp  
	${CC} ${CFLAGS} -c EtatRobotFige.cpp
	
EtatRobotEnRoute.o : EtatRobotEnRoute.cpp  
	${CC} ${CFLAGS} -c EtatRobotEnRoute.cpp
	
EtatRobotAVide.o : EtatRobotAVide.cpp 
	${CC} ${CFLAGS} -c  EtatRobotAVide.cpp

EtatRobotAVideFaceObstacle.o : EtatRobotAVideFaceObstacle.cpp 
	${CC} ${CFLAGS} -c  EtatRobotAVideFaceObstacle.cpp

EtatRobotEnCharge.o : EtatRobotEnCharge.cpp 
	${CC} ${CFLAGS} -c  EtatRobotEnCharge.cpp

EtatRobotEnChargeFaceObstacle.o : EtatRobotEnChargeFaceObstacle.cpp 
	${CC} ${CFLAGS} -c  EtatRobotEnChargeFaceObstacle.cpp

Objet.o : Objet.cpp 
	${CC} ${CFLAGS} -c Objet.cpp
	
Obstacle.o : Obstacle.cpp 
	${CC} ${CFLAGS} -c Obstacle.cpp
	
Position.o : Position.cpp 
	${CC} ${CFLAGS} -c Position.cpp
	
main.o : main.cpp
	${CC} ${CFLAGS} -c main.cpp

clean :
	rm -f *.o

