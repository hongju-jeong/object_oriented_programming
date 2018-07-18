#pragma once
#include <iostream>
using namespace std;
class Figure
{
public:
	Figure();
	~Figure();
	void virtual Side() = 0;
	void virtual Area() = 0;
	void virtual Round() = 0;

};

