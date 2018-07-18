#include "Fraction.h"



Fraction::Fraction(int _numerator, int _denominator)
{
	numerator = _numerator;
	denominator = _denominator;
}

void Fraction::Printfraction()
{
	cout << numerator << "/" << denominator << endl;
}

Fraction Fraction::Add(Fraction a)
{
	int num1, num2;
	num2 = denominator * a.GetDenominator();
	num1 = numerator * a.GetDenominator() + a.GetNumerator()* denominator;
	
	return Fraction(num1,num2);
}

Fraction Fraction::Sub(Fraction a)
{
	int num1, num2;
	num2 = denominator * a.GetDenominator();
	num1 = numerator * a.GetDenominator() - a.GetNumerator()* denominator;
	return Fraction(num1, num2);
}

Fraction Fraction::Mul(Fraction a)
{
	int num1, num2;
	num2 = denominator * a.GetDenominator();
	num1 = numerator * a.GetNumerator();
	return Fraction(num1, num2);
}

Fraction Fraction::Div(Fraction a)
{
	int num1, num2;
	num2 = denominator * a.GetNumerator();
	num1 = numerator * a.GetDenominator();

	return Fraction(num1, num2);
}

void Fraction::FracAbb()
{
	int r;
	int a = numerator;
	int b = denominator;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	numerator = numerator / a;
	denominator = denominator / a;

}

Fraction Fraction::operator+(Fraction a)
{
	Fraction c;
	c = this->Add(a);
	c.FracAbb();
	return c;
}

Fraction Fraction::operator-(Fraction a)
{
	Fraction c;
	c = this->Sub(a);
	c.FracAbb();
	return c;
}

Fraction Fraction::operator*(Fraction a)
{
	Fraction c;
	c = this->Mul(a);
	c.FracAbb();
	return c;
}

Fraction Fraction::operator/(Fraction a)
{
	Fraction c;
	c = this->Div(a);
	c.FracAbb();
	return c;
}


Fraction::Fraction()
{
}

Fraction::~Fraction()
{
}
