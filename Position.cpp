#include "Position.h"

Position::Position(int x, int y) : x(x) , y(y) {}

void Position::setx(int x){
	this->x = x;
}

void Position::sety(int y){
	this->y = y;
}

int Position::getx(){
	return this->x;
}

int Position::gety(){
	return this->y;
}
