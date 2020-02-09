/*
 * MatrixStream.h
 *
 *  Created on: Feb 9, 2020
 *      Author: Owner
 */

#ifndef MATRIXSTREAM_H_
#define MATRIXSTREAM_H_

#include <ostream>
#include "Matrix.h"

std::ostream& operator<<(std::ostream& stream, const Matrix& mat)
{
	std::string tempString ="[";
	int** tempMatrix = mat.getMatrix();
	int tempRow = mat.getRow(), tempColumn = mat.getColumn();
	for(int i = 0; i < tempRow; i++)
	{
//		stream << '[' << tempMatrix[i][0];
		tempString += ("[" + tempMatrix[i][0]);
		for(int j = 1; j < tempColumn; j++)
			tempString += (", " + tempMatrix[i][j]);
//			stream << ", " << tempMatrix[i][j];
		tempString += "]\n";
//		stream << "]\n";
	}
	tempString += "]\n";
//	stream << "]\n";
	return stream << tempString;
}

#endif /* MATRIXSTREAM_H_ */
