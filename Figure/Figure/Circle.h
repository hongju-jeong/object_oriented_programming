#pragma once
#include "Figure.h"
#define _USE_MATH_DEFINES
#include "math.h"

class Circle
	: public Figure
{
public:
	Circle();
	~Circle();
	void virtual Side() {
		cout << "반지름 길이 입력 :: ";
		cin >> radius;

	}
	void virtual Area() {
		double area;
		area = radius * radius * M_PI;
		cout << area;
	};
	void virtual Round() {
		double round;
		round = 2 * radius * M_PI;
		cout << round;
	};
private:
	double radius;
};

