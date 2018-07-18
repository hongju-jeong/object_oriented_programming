#include "Matrix.h"

Matrix::Matrix()
{

}


Matrix::~Matrix()
{
	for (int i = 0; i < row; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
}

Matrix::Matrix(int _row, int _col)
{
	row = _row;
	col = _col;
	matrix = new int*[row];
	for (int i = 0; i < row; i++) {
		matrix[i] = new int[col];
	}
}

void Matrix::InputMatrix()
{
	int input_num;
	cout << row * col << "개의 행렬의 요소를 입력하시오" << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> input_num;
			matrix[i][j] = input_num;
		}
	}
}

void Matrix::PrintMatrix()
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

Matrix Matrix::Add(Matrix a)
{
	Matrix temp(row, col);
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			temp.matrix[i][j] = matrix[i][j] + a.matrix[i][j];
		}
	}
	return temp;
}

Matrix Matrix::Sub(Matrix a)
{
	Matrix temp(row, col);
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			temp.matrix[i][j] = matrix[i][j] - a.matrix[i][j];
		}
	}
	return temp;
}

Matrix Matrix::Mul(Matrix a)
{
	Matrix temp(row, a.col);
	int sum;
	int i,j,k;
	for (i = 0; i < row; i++) {
		sum = 0;
		for (k = 0; k < a.col; k++) {
			for (j = 0; j < col; j++) {
				sum = sum + matrix[i][j] * a.matrix[j][k];
			}
			temp.matrix[i][k] = sum;
		}
		
	}
	return temp;
}

Matrix::Matrix(const Matrix & other)          // 복사 생성자! const정확히 알아보기
{
	row = other.row;
	col = other.col;
	matrix = new int*[row];
	for (int i = 0; i < row; i++) {
		matrix[i] = new int[col];
		for (int j = 0; j < col; j++) {
			matrix[i][j] = other.matrix[i][j];
		}
	}
}
