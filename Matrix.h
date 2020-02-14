/*
 * Matrix.h
 *
 *  Created on: Dec 16, 2018
 *      Author: Owner
 */

#ifndef MATRIX_H_
#define MATRIX_H_

class Matrix {
public:
	Matrix(const int row, const int column);
	~Matrix();
	Matrix& operator+(const Matrix& summand);
	Matrix& operator*(const Matrix& multiplier);
	void setEntry(int rowIndex, int colIndex, int entry);
	int getRow() const;
	int getColumn() const;
	int** getMatrix() const;

private:
	int rowSize;
	int columnSize;
	int **matrix;
};

#endif /* MATRIX_H_ */
