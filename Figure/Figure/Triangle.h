#pragma once
#include "Figure.h"
#include "math.h"
class Triangle
	: public Figure
{
public:
	Triangle();
	~Triangle();
	void virtual Side() {
		cout << "첫 번째 변 길이 입력 ::";
		cin >> side1;
		cout << "두 번째 변 길이 입력 ::";
		cin >> side2;
		cout << "세 번째 변 길이 입력 ::";
		cin >> side3;

	};
	void virtual Area() {
		double area;
		double s;
		s = (side1 + side2 + side3) / 2;
		area = sqrt(s*(s - side1)*(s - side2)*(s - side3)); // 헤론의 공식
		cout << area;;
	};
	void virtual Round() {
		double round;
		round = side1 + side2 + side3;
		cout << round;
	};
private:
	double side1;
	double side2;
	double side3;
};

