#ifndef POSITION_H
#define POSITION_H

class Position {

private:
	int x;
	int y;
public:
	Position(int x, int y);
	void setx(int x);
	void sety(int y);
	int getx();
	int gety();
};

#endif
