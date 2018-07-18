#pragma once
#include <iostream>
using namespace std;
class Matrix
{

public:
	Matrix();
	~Matrix();
public:
	Matrix(int _row, int _col);
	void InputMatrix();
	void PrintMatrix();
	int GetRow() { return row; }
	int GetCol() { return col; }
	int** GetMatrix() { return matrix; }
	Matrix Add(Matrix a);
	Matrix Sub(Matrix a);
	Matrix Mul(Matrix a);
	Matrix(const Matrix & other);
	Matrix& operator = (const Matrix &a) {
		row = a.row;
		col = a.col;
		matrix = new int*[row];
		for (int i = 0; i < row; i++) {
			matrix[i] = new int[col];
			for (int j = 0; j < col; j++) {
				matrix[i][j] = a.matrix[i][j];
			}
		}
		return *this;
	}
private:
	int row;
	int col;
	int** matrix;

};

