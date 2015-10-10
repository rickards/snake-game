/*
 * textura.h
 *
 *  Created on: 09/03/2014
 *      Author: rafael
 */

#include <string>
#include <iostream>
#include <math.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <SOIL/SOIL.h>
using namespace std;

class Textura{
public:
	GLuint texture_id;
	Textura(string);

};
