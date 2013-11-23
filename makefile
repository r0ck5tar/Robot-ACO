CC = g++
CFLAGS = -Wall -g

all : main.o Robot.o EtatRobot.o EtatRobotFige.o EtatRobotEnRoute.o Objet.o Obstacle.o Position.o
	${CC} ${CFLAGS} Robot.o EtatRobot.o EtatRobotFige.o EtatRobotEnRoute.o Objet.o Obstacle.o Position.o main.o -o SimRobot
	
Robot.o : Robot.cpp Robot.h
	${CC} ${CFLAGS} -c Robot.cpp

EtatRobot.o : EtatRobot.cpp EtatRobot.h
	${CC} ${CFLAGS} -c EtatRobot.cpp
	
EtatRobotFige.o : EtatRobotFige.cpp  
	${CC} ${CFLAGS} -c EtatRobotFige.cpp

Objet.o : Objet.cpp Objet.h 
	${CC} ${CFLAGS} -c Objet.cpp
	
Obstacle.o : Obstacle.cpp Obstacle.h 
	${CC} ${CFLAGS} -c Obstacle.cpp
	
Position.o : Position.cpp Position.h 
	${CC} ${CFLAGS} -c Position.cpp
	
main.o : main.cpp
	${CC} ${CFLAGS} -c main.cpp

EtatRobotEnRoute.o : EtatRobotEnRoute.cpp  
	${CC} ${CFLAGS} -c EtatRobotEnRoute.cpp
