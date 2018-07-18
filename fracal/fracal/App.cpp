#include "App.h"
#include "Fraction.h"

void App::getCommand()
{
	cout << "------------------" << endl;
	cout << "1. 덧셈" << endl;
	cout << "2. 뺄셈" << endl;
	cout << "3. 곱셈" << endl;
	cout << "4. 나눗셈" << endl;
	cout << "0. 종료" << endl;
	cout << "------------------" << endl;

	cout << "입력 :: ";
	cin >> command;
}

void App::start()
{
	int num1, num2, deno1, deno2;
	while (true)
	{
		cout << "1번 분수를 입력하시오(분자 분모 순서)::";
		cin >> num1;
		cin >> deno1;
		if (deno1 == 0)
			cout << "분모에 0이 아닌 수를 입력하시오" << endl;
		else
			break;
	}
	while (true)
	{
		cout << "2번 분수를 입력하시오(분자 분모 순서)::";
		cin >> num2;
		cin >> deno2;
		if (deno2 == 0)
			cout << "분모에 0이 아닌 수를 입력하시오" << endl;
		else
			break;
	}
	frac1 = Fraction(num1, deno1);
	frac2 = Fraction(num2, deno2);
}

void App::add()
{
	Fraction frac3 = frac1 + frac2;
	cout << "결과 -> ";
	frac3.Printfraction();
	cout << endl;
	system("pause");
}

void App::sub()
{
	Fraction frac3 = frac1 - frac2;
	cout << "결과 -> ";
	frac3.Printfraction();
	cout << endl;
	system("pause");
}

void App::multi()
{
	Fraction frac3 = frac1 * frac2;
	cout << "결과 -> ";
	frac3.Printfraction();
	cout << endl;
	system("pause");
}

void App::div()
{
	Fraction frac3 = frac1 / frac2;
	cout << "결과 -> ";
	frac3.Printfraction();
	cout << endl;
	system("pause");
}

App::App()
{
}

App::~App()
{
}

void App::run()
{
	start();

	while (true)
	{
		system("cls");

		cout << "1번 분수 :: ";
		frac1.Printfraction();
		cout << endl;
		cout << "2번 분수 :: ";
		frac2.Printfraction();
		cout << endl;

		getCommand();

		if (command == 0)
			break;
		else if (command == 1)
		{
			add();
		}
		else if (command == 2)
		{
			sub();
		}
		else if (command == 3)
		{
			multi();
		}
		else if (command == 4)
		{
			div();
		}
	}
}