#include "App.h"
#include "Fraction.h"

void App::getCommand()
{
	cout << "------------------" << endl;
	cout << "1. ����" << endl;
	cout << "2. ����" << endl;
	cout << "3. ����" << endl;
	cout << "4. ������" << endl;
	cout << "0. ����" << endl;
	cout << "------------------" << endl;

	cout << "�Է� :: ";
	cin >> command;
}

void App::start()
{
	int num1, num2, deno1, deno2;
	while (true)
	{
		cout << "1�� �м��� �Է��Ͻÿ�(���� �и� ����)::";
		cin >> num1;
		cin >> deno1;
		if (deno1 == 0)
			cout << "�и� 0�� �ƴ� ���� �Է��Ͻÿ�" << endl;
		else
			break;
	}
	while (true)
	{
		cout << "2�� �м��� �Է��Ͻÿ�(���� �и� ����)::";
		cin >> num2;
		cin >> deno2;
		if (deno2 == 0)
			cout << "�и� 0�� �ƴ� ���� �Է��Ͻÿ�" << endl;
		else
			break;
	}
	frac1 = Fraction(num1, deno1);
	frac2 = Fraction(num2, deno2);
}

void App::add()
{
	Fraction frac3 = frac1 + frac2;
	cout << "��� -> ";
	frac3.Printfraction();
	cout << endl;
	system("pause");
}

void App::sub()
{
	Fraction frac3 = frac1 - frac2;
	cout << "��� -> ";
	frac3.Printfraction();
	cout << endl;
	system("pause");
}

void App::multi()
{
	Fraction frac3 = frac1 * frac2;
	cout << "��� -> ";
	frac3.Printfraction();
	cout << endl;
	system("pause");
}

void App::div()
{
	Fraction frac3 = frac1 / frac2;
	cout << "��� -> ";
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

		cout << "1�� �м� :: ";
		frac1.Printfraction();
		cout << endl;
		cout << "2�� �м� :: ";
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