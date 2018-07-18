#pragma once
#include <iostream>
using namespace std;
class Fraction
{
public:
	Fraction();
	~Fraction();
public:
	Fraction(int _numerator, int _denominator);
	void Printfraction();
	Fraction Add(Fraction a);
	Fraction Sub(Fraction a);
	Fraction Mul(Fraction a);
	Fraction Div(Fraction a);

	void FracAbb();
	int GetNumerator() { return numerator; }
	int GetDenominator() { return denominator; }

	Fraction operator+(Fraction a);
	Fraction operator-(Fraction a);
	Fraction operator*(Fraction a);
	Fraction operator/(Fraction a);
	


private:
	int numerator;
	int denominator;
};

