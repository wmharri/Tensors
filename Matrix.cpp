/*
 * Matrix.cpp

 *
 *  Created on: Dec 16, 2018
 *      Author: Owner
 */

#include "Matrix.h"
//#include <iostream>

Matrix::Matrix(const int row, const int column)
{
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

int Matrix::getRow() const
{
	return this->rowSize;
}

int Matrix::getColumn() const
{
	return this->columnSize;
}

int** Matrix::getMatrix() const
{
	return this->matrix;
}

Matrix& Matrix::operator+(const Matrix& summand)
{
	if(!((columnSize == summand.columnSize) && (rowSize == summand.rowSize)))
		throw "Matrix dimensions must agree.";
	int row = rowSize;
		int column = columnSize;
		Matrix* sum = new Matrix(row, column);
		int i, j;
//		int a, b;
		for(i = 0; i < row; i++)
		{
			for(j = 0; j < column; j++)
			{
//				a = this->matrix[i][j]; b = summand.matrix[i][j];
//				sum->setEntry(i, j, a+b);
				sum->setEntry(i, j, (this->matrix)[i][j] + (summand.matrix)[i][j]);
			}
		}
	return* sum;
}

void Matrix::setEntry(int rowIndex, int colIndex, int entry)
{
//	int[this->rowSize] temp = new int[];
	if(rowIndex < this->rowSize && colIndex < this->columnSize)
	{
//		int temp = *(this->matrix) + 4*colIndex;
		((this->matrix)[rowIndex])[colIndex] = entry;
//		this->matrix[temp][rowIndex] = entry;
	}
}
// }

// Matrix& Matrix::operator+(Matrix& summand)
//{
//	if((columnSize == summand.columnSize) &&
//			(this->rowSize == summand.rowSize))
//	{
//			int row = this->rowSize;
//			int column = this->columnSize;
//			Matrix sum = new Matrix(this->rowSize, this->columnSize);
//			int i, j;
//			for(i = 0; i < row; i++)
//			{
//				for(j = 0; j < column; j++)
//					sum[j][i] = this->matrix[j][i] + summand->matrix[j][i];
//			}
//			return &sum;
//	}
//	cerr << "Index mismatch error." << endl;
// }
