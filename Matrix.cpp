/*
 * Matrix.cpp

 *
 *  Created on: Dec 16, 2018
 *      Author: Michael Harrison
 */

#include "Matrix.h"

// class constructor for Matrix
Matrix::Matrix(const int row, const int column)
{
	if(row < 1 || column < 1)
		throw "Matrix dimensions must be positive";
	this->rowSize = row;
	this->columnSize = column;
	int i;
	matrix = new int*[row];
	for(i = 0; i < row; i++)
		matrix[i] = new int[column];
	for(i = 0; i < row; i++)
		for(int j = 0; j < column; j++)
		this->matrix[i][j] = 0;
}

// class destructor for Matrix
Matrix::~Matrix()
{
	for(int i = 0; i < rowSize; i++)
		delete this->matrix[i];
	delete this->matrix;
}

// copy constructor for Matrix
Matrix::Matrix(const Matrix &obj)
{
	rowSize = obj.rowSize;
	columnSize = obj.columnSize;
	matrix = new int*[rowSize];
	for(int i = 0; i < rowSize; i++)
	{
		matrix[i] = new int[columnSize];
		for(int j = 0; j < columnSize; j++)
			matrix[i][j] = obj.matrix[i][j];
	}
}

// accessor function for row size
int Matrix::getRow() const
{
	return this->rowSize;
}

// accessor function for column size
int Matrix::getColumn() const
{
	return this->columnSize;
}

// accessor function for matrix contents
int** Matrix::getMatrix() const
{
	return this->matrix;
}

// overload for the = operator
Matrix& Matrix::operator=(Matrix other)
{
	rowSize = other.rowSize;
	columnSize = other.columnSize;
	matrix = new int*[rowSize];
	for(int i = 0; i < rowSize; i++)
	{
		matrix[i] = new int[columnSize];
		for(int j = 0; j < columnSize; j++)
			matrix[i][j] = other.matrix[i][j];
	}
	return (*this);
}

// overload for the + operator
Matrix& Matrix::operator+(const Matrix& summand)
{
	if(!((columnSize == summand.columnSize) && (rowSize == summand.rowSize)))
		throw "Matrix dimensions must agree.";
	int row = rowSize;
	int column = columnSize;
	Matrix* sum = new Matrix(row, column);
	int i, j;
	for(i = 0; i < row; i++)
	{
	for(j = 0; j < column; j++)
		sum->setEntry(i, j, (this->matrix)[i][j] + (summand.matrix)[i][j]);
	}
	return *sum;
}

// overload for the * operator
Matrix& Matrix::operator*(const Matrix& multiplier)
{
	if(!((columnSize == multiplier.rowSize)))
		throw "Matrix dimensions must agree.";
	int row = rowSize;
	int column = multiplier.columnSize;
	Matrix* product = new Matrix(row, column);
	int i, j, k;
	int entry;
		for(i = 0; i < row; i++)
		{
			for(j = 0; j < column; j++)
			{
				entry = 0;
				for(k = 0; k < columnSize; k++)
					entry += matrix[i][k] * multiplier.matrix[k][j];
				product->setEntry(i, j, entry);
			}
		}
	return *product;
}

// method for changing entries in a matrix
void Matrix::setEntry(int rowIndex, int colIndex, int entry)
{
	if(rowIndex < this->rowSize && colIndex < this->columnSize)
	{
		((this->matrix)[rowIndex])[colIndex] = entry;
	}
}

// creates the nxn identify function / Kronecker delta
Matrix Matrix::Delta(/*Matrix matrix, */int size) // Don't declare static here!
{
	if(size < 1)
		throw "Matrix dimensions must be positive.";
	Matrix* squareMatrix = new Matrix(size, size);
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
			squareMatrix->setEntry(i, j, (i == j) ? 1 : 0);
	}
	return *squareMatrix;
//	matrix = *squareMatrix;
}

// TODO Implement Epsilon(int[]) or Epsilon(int, int[]), the "index permuter"

// TODO Implement G(int, int, int), the pseudoRiemannian metric matrix
// (first integer: start positive or negative; the next two define the signature)
// Will very much resemble Matrix::Delta

// TODO Define polynomials? Polynomial differentiation? Analytic functions?
