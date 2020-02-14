/*
 * MatrixStream.h
 *
 *  Created on: Feb 9, 2020
 *      Author: Michael Harrison
 */

#ifndef MATRIXSTREAM_H_
#define MATRIXSTREAM_H_

#include <ostream>
#include "Matrix.h"

// The sole purpose of this file is to overload the << operator for Matrix objects.
std::ostream& operator<<(std::ostream& stream, const Matrix& mat)
{
	int** tempMatrix = mat.getMatrix();
	int tempRow = mat.getRow(), tempColumn = mat.getColumn();
	stream << "[";
	for(int i = 0; i < tempRow - 1; i++)
	{
		stream << "[" << tempMatrix[i][0];
		for(int j = 1; j < tempColumn; j++)
			stream << ", " << tempMatrix[i][j];
		stream << "]\n";
	}
	stream << "[" << tempMatrix[tempRow-1][0];
	for(int j = 1; j < tempColumn; j++)
		stream << ", " << tempMatrix[tempRow-1][j];
	stream << "]";

	stream << "]" << std::endl;
	return stream;
}

#endif /* MATRIXSTREAM_H_ */
