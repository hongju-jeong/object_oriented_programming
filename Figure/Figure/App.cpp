#include "App.h"



App::App()
{
}


App::~App()
{
}

void App::GetCommand()
{
	cout << "------------------" << endl;
	cout << "1. 직사각형" << endl;
	cout << "2. 정사각형" << endl;
	cout << "3. 삼각형" << endl;
	cout << "4. 정삼각형" << endl;
	cout << "5. 원" << endl;
	cout << "0. 종료" << endl;
	cout << "------------------" << endl;

	cout << "입력 :: ";
	cin >> command;
}

void App::Run()
{
	GetCommand();

	while (true)
	{
		system("cls");
		if (command == 1) {
			figure = new Rectangle;
			figure->Side();
			Choice();
			if (choice != 1 || choice != 2) break;
		}
		else if (command == 2) {

			figure = new Square;
			figure->Side();
			Choice();
			if (choice != 1 || choice != 2) break;
			
		}
		else if (command == 3) {
			figure = new Triangle;
			figure->Side();
			Choice();
			if (choice != 1 || choice != 2) break;
		}
		else if (command == 4) {
			figure = new E_Triangle;
			figure->Side();
			Choice();
			if (choice != 1 || choice != 2) break;
		}
		else if (command == 5) {
			figure = new Circle;
			figure->Side();
			Choice();
			if (choice != 1 || choice != 2) break;
		}
		else if (command == 0) {
			break;
		}
	}
}

void App::Choice()
{
	cout << "----------------------" << endl;
	cout << "1. 둘레" << endl;
	cout << "2. 넓이" << endl;
	cout << "----------------------" << endl;
	cin >> choice;
	if (choice == 1) {
		cout << "둘레는 ";
		figure->Round();
		cout << "입니다.";
	}
	else if (choice == 2) {
		cout << "넓이는 ";
		figure->Area();
		cout << "입니다.";
	}
}
