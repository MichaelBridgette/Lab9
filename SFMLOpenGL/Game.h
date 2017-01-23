#ifndef GAME_H
#define GAME_H

#include"Debug.h"

#include <iostream>
#include <GL/glew.h>
#include <GL/wglew.h>
#include<fstream>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>
#include<GL\GL.h>
#include<GL\GLU.h>
#include "Vector3.h"
#include "Matrix3.h"
#include<sstream>

using namespace std;
using namespace sf;
//using namespace gpp;

class Game
{
public:
	Game();
	~Game();
	void run();
private:
	Window window;
	bool isRunning = false;
	void initialize();
	void update();
	void render();
	void unload();

	Clock clock;
	Time elapsed;

	float rotationAngle = 0.0f;


	Matrix3 m1 = Matrix3().RotationZ(0.01);

	
	MyVector3 v1 = MyVector3(-0.5f,
	-0.5f,
	0.0f);
	MyVector3 v2 = MyVector3(-0.5f,
	0.5f,
	0.0f);
	MyVector3 v3 = MyVector3(0.5f,
	0.5f,
	0.0f);
	MyVector3 v4 = MyVector3(0.5f,
	-0.5f,
	0.5f);
	MyVector3 v5 = MyVector3(-0.5f,
	-0.5f,
	-0.5f);
	MyVector3 v6 = MyVector3(-0.5f,
	0.5f,
	-0.5f);
	MyVector3 v7 = MyVector3(0.5f,
		0.5f,
		-0.5f);
	MyVector3 v8 = MyVector3(0.5f,
	-0.5f,
	-0.5f);
};

#endif