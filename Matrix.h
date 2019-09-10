/*
 * Matrix.h
 *
 *  Created on: Dec 16, 2018
 *      Author: Owner
 */

#ifndef MATRIX_H_
#define MATRIX_H_

// #include "Matrix.cpp"

class Matrix {
public:
	Matrix(const int row, const int column);
//	Matrix& operator+(Matrix& summand);
	void setEntry(int rowIndex, int colIndex, int entry);

private:
	int rowSize;
	int columnSize;
	int **matrix;
};




/*Matrix::Matrix(const int row, const int column)
{
	this->rowSize = row;
	this->columnSize = column;
	this->matrix = new int[column][row];
}*/

/*Matrix& Matrix::operator+(const Matrix& summand)
{
	if((columnSize == &summand->columnSize) && (rowSize == &summand->rowSize))
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
}

void setEntry(int rowIndex, int colIndex, int entry)
{
	if(rowIndex < rowSize && colIndex < colSize)
	matrix[colIndex][rowIndex] = entry;
}*/

#endif /* MATRIX_H_ */
