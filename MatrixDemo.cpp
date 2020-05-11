/*
 * MatrixDemo.cpp
 *
 *  Created on: Feb 9, 2020
 *      Author: Michael Harrison
 */

#include <iostream>
#include "MatrixStream.h"
#include "Matrix.h"

int main()
{
	Matrix identity = Matrix::Delta(2);
	//Matrix::Delta(identity, 2);
//	identity = Matrix::Delta(2);
//	identity.setEntry(0, 0, 1);
//	identity.setEntry(1, 1, 1);
//	std::cout << identity + identity;
	Matrix newMatrix = (identity + identity) * (identity + identity);
	std::cout << newMatrix;

	return 0;
}
