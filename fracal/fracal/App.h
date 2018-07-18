#pragma once
#include "Fraction.h"
class App
{
public:
	App();
	~App();
	void start();
	void run();
	void getCommand();
	void add();
	void sub();
	void multi();
	void div();
private:
	int command;
	Fraction frac1;
	Fraction frac2;
};
