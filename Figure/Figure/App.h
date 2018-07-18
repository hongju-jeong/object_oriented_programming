#pragma once
#include "Circle.h"
#include "E_Triangle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Triangle.h"
class App
{
public:
	App();
	~App();
	void GetCommand();
	void Run();
	void Choice();
private:
	int command;
	int choice;
	Figure* figure;
};

