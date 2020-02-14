/*
 * MatrixDemo.cpp
 *
 *  Created on: Feb 9, 2020
 *      Author: Michael Harrison
 */

#include "Matrix.h"
#include <iostream>
#include "MatrixStream.h"

int main()
{
	Matrix identity(2, 2);
	identity.setEntry(0, 0, 1);
	identity.setEntry(1, 1, 1);
//	std::cout << identity + identity;
	std::cout << (identity + identity) * (identity + identity);

	return 0;
}
