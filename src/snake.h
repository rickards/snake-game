/*
 * snake.h
 *
 *  Created on: 22/02/2014
 *      Author: rafael
 */

#include <stdlib.h>
class Snake{
private:
	float x;
	float y;
	Snake *prox;
	bool is_right;
	bool is_left;
	bool is_down;
	bool is_up;
	float red;
	float blue;
	float green;
public:

	Snake(float nx, float ny);
	void crescer();

	float getX(){return x;}
	float getY(){return y;}
	Snake* getProx(){return prox;}
	void setX(float nx){x=nx;}
	void setY(float ny){y=ny;}
	void setProx(Snake *p){prox=p;}
	bool estaNasCordenadas(float x, float y);
	float getRed(){return red;}
	float getBlue(){return blue;}
	float getGreen(){return green;}
	void setRed(float nx){red=nx;}
	void setBlue(float ny){blue=ny;}
	void setGreen(float p){green=p;}

	void permutarPosicoes(float x,float y,Snake* temp=NULL);
	void andar();
	void right();
	void up();
	void down();
	void left();
	void mudarCor();
};

