#pragma once
#include "Figure.h"
#include "math.h"
class Square
	: public Figure
{
public:
	Square();
	~Square();
	void virtual Side() {
		cout << "�� ���� ���� �Է� :: ";
		cin >> side;
	};
	void virtual Area() {
		double area;
		area = side * side;
		cout << area;
	};
	void virtual Round() {
		double round;
		round = 4 * side;
		cout << round;
	};
private:
	double side;
};

