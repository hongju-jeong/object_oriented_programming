#pragma once
#include "Figure.h"
#include "math.h"
class Rectangle
	: public Figure
{
public:
	Rectangle();
	~Rectangle();
	void virtual Side() {
		cout << "���� ���� �Է� :: ";
		cin >> horizontal;
		cout << "���� ���� �Է� :: ";
		cin >> vertical;
	};
	void virtual Area() {
		double area;
		area = horizontal * vertical;
		cout << area;
	};
	void virtual Round() {
		double round;
		round = 2 * (horizontal + vertical);
		cout<< round;
	};
private:
	double horizontal;
	double vertical;
};

