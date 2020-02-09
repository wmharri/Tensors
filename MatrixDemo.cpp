/*
 * MatrixDemo.cpp
 *
 *  Created on: Feb 9, 2020
 *      Author: Owner
 */

#include "Matrix.h"
#include <iostream>
#include "MatrixStream.h"

int main()
{
	Matrix identity(2, 2);
	identity.setEntry(0, 0, 1);
	identity.setEntry(1, 1, 1);
	int** tempMatrix = (identity + identity).getMatrix();
	std::cout << "[[" << tempMatrix[0][0] << ", " << tempMatrix[0][1] << "]" << std::endl;
	std::cout << "[" << tempMatrix[1][0] << ", " << tempMatrix[1][1] << "]]" << std::endl;
//	std::cout << identity + identity;

	return 0;
}
