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
	cout << "1. ���簢��" << endl;
	cout << "2. ���簢��" << endl;
	cout << "3. �ﰢ��" << endl;
	cout << "4. ���ﰢ��" << endl;
	cout << "5. ��" << endl;
	cout << "0. ����" << endl;
	cout << "------------------" << endl;

	cout << "�Է� :: ";
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
	cout << "1. �ѷ�" << endl;
	cout << "2. ����" << endl;
	cout << "----------------------" << endl;
	cin >> choice;
	if (choice == 1) {
		cout << "�ѷ��� ";
		figure->Round();
		cout << "�Դϴ�.";
	}
	else if (choice == 2) {
		cout << "���̴� ";
		figure->Area();
		cout << "�Դϴ�.";
	}
}
