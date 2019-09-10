/*
 * Matrix.cpp

 *
 *  Created on: Dec 16, 2018
 *      Author: Owner
 */

#include "Matrix.h"

Matrix::Matrix(const int row, const int column)
{
	this->rowSize = row;
	this->columnSize = column;
	int i;
	matrix = new int[row][column];
	for(i = 0; i < row*column; i++)
		this->matrix[i] = 0;
}

/*Matrix& Matrix::operator+(Matrix& summand)
{
	if((columnSize == summand->columnSize) && (rowSize == summand->rowSize))
	{
			int row = rowSize;
			int column = columnSize;
			Matrix sum = new Matrix(row, column);
			int i, j;
			for(i = 0; i < row; i++)
			{
				for(j = 0; j < column; j++)
					sum[j][i] = matrix[j][i] + &summand->matrix[j][i];
			}
			return sum;

	}
}*/

void Matrix::setEntry(int rowIndex, int colIndex, int entry)
{
//	int[this->rowSize] temp = new int[];
	if(rowIndex < this->rowSize && colIndex < this->columnSize)
	{
		int temp = *(this->matrix) + 4*colIndex;
//		((this->matrix)[rowIndex])[colIndex] = entry;
		this->matrix[temp][rowIndex] = entry;
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
