#ifndef MATRIX_H_
#define MATRIX_H_

class Matrix {
public:
	Matrix(const int row, const int column);
	~Matrix();
	Matrix(const Matrix &obj);
	Matrix& operator=(Matrix other);
	Matrix& operator+(const Matrix& summand);
	Matrix& operator*(const Matrix& multiplier);
	void setEntry(int rowIndex, int colIndex, int entry);
	int getRow() const;
	int getColumn() const;
	int** getMatrix() const;

	static Matrix Delta(/*Matrix matrix, */int size);

private:
	int rowSize;
	int columnSize;
	int **matrix;
};

#endif /* MATRIX_H_ */
