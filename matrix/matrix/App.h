#pragma once
#include "Matrix.h"
class App
{
public:
	App();
	~App();
public:
	void GetCommand();
	void Add();
	void Sub();
	void Mul();
	void Start();
	void Run();
private:
	int command;
	Matrix mat1;
	Matrix mat2;
};

