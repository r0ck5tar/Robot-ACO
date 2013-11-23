CC = g++
CFLAGS = -Wall -g

all : main.o Robot.o AffichageRobot.o EtatRobot.o EtatRobotFige.o EtatRobotEnRoute.o Objet.o Obstacle.o Position.o
	${CC} ${CFLAGS} Robot.o AffichageRobot.o EtatRobot.o EtatRobotFige.o EtatRobotEnRoute.o Objet.o Obstacle.o Position.o main.o -o SimRobot
	
Robot.o : Robot.cpp 
	${CC} ${CFLAGS} -c Robot.cpp
	
AffichageRobot.o : AffichageRobot.cpp AffichageRobot.h
	${CC} ${CFLAGS} -c AffichageRobot.cpp

EtatRobot.o : EtatRobot.cpp 
	${CC} ${CFLAGS} -c EtatRobot.cpp
	
EtatRobotFige.o : EtatRobotFige.cpp  
	${CC} ${CFLAGS} -c EtatRobotFige.cpp
	
EtatRobotEnRoute.o : EtatRobotEnRoute.cpp  
	${CC} ${CFLAGS} -c EtatRobotEnRoute.cpp

Objet.o : Objet.cpp 
	${CC} ${CFLAGS} -c Objet.cpp
	
Obstacle.o : Obstacle.cpp 
	${CC} ${CFLAGS} -c Obstacle.cpp
	
Position.o : Position.cpp 
	${CC} ${CFLAGS} -c Position.cpp
	
main.o : main.cpp
	${CC} ${CFLAGS} -c main.cpp


