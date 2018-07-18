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
	cout << "1. 덧셈" << endl;
	cout << "2. 뺄셈" << endl;
	cout << "3. 곱셈" << endl;
	cout << "0. 종료" << endl;
	cout << "------------------" << endl;

	cout << "입력 :: ";
	cin >> command;
}

void App::Add()
{
	Matrix mat3 = mat1.Add(mat2);
	cout << "결과 -> ";
	mat3.PrintMatrix();
	cout << endl;
	system("pause");
}

void App::Sub()
{
	Matrix mat3 = mat1.Sub(mat2);
	cout << "결과 -> ";
	mat3.PrintMatrix();
	cout << endl;
	system("pause");
}

void App::Mul()
{
	Matrix mat3 = mat1.Mul(mat2);
	cout << "결과 -> ";
	mat3.PrintMatrix();
	cout << endl;
	system("pause");
}

void App::Start()
{
	int row1, col1;
	int row2, col2;
	while (true)
	{
		cout << "1번 행렬의 크기를 입력하시오(행 열 순서)::";
		cin >> row1;
		cin >> col1;
		if (row1 < 0 || col1 <0)
			cout << "0이 아닌 수를 입력하시오" << endl;
		else
			break;
	}
	mat1 = Matrix(row1, col1);
	mat1.InputMatrix();
	while (true)
	{
		cout << "2번 행렬의 크기를 입력하시오(행 열 순서)::";
		cin >> row2;
		cin >> col2;
		if (row2 < 0 || col2 <0)
			cout << "0이 아닌 수를 입력하시오" << endl;
		else
			break;
	}
	
	mat2 = Matrix(row2, col2);
	mat2.InputMatrix();
}

void App::Run()
{
	Start();

	while(true){
		system("cls");

		GetCommand();

		if (command == 1) {
			Add();
		}
		else if (command == 2) {
			
			Sub();
		}
		else if (command == 3) {
			if (mat1.GetCol() != mat2.GetRow()) {
				cout << "행렬의 모양이 옳지 않습니다." << endl;
				break;
			}
			Mul();
		}
		else if (command == 0) {
			break;
		}
	}
}
