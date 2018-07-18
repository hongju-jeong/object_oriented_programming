#pragma once
#include "Figure.h"
#include "math.h"
class E_Triangle
	: public Figure
{
public:
	E_Triangle();
	~E_Triangle();
	void virtual Side() {
		cout << "한변 길이 입력";
		cin >> side;
	};
	void virtual Area() {
		double area;
		area = (sqrt(3) / 4)*side*side;
		cout << area;
	};
	void virtual Round() {
		double round;
		round = side * 3;
		cout << round;
	};
private:
	double side;
};

