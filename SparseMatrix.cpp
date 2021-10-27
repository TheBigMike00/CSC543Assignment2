#include "SparseMatrix.h"
#include <iostream>

SparseMatrix::SparseMatrix(int** matrix, int matrixRows, int matrixCols)
{
	this->theMatrix = matrix;
	this->matrixR = matrixRows;
	this->matrixC = matrixCols;
	this->numNonZeroElements = getNonZeroElements(theMatrix);
	this->twoDArr = new int* [3];
	for (int i = 0; i < this->numNonZeroElements; i++)
	{
		this->twoDArr[i] = new int[this->numNonZeroElements];
	}
 	convertThatThang(theMatrix);
}

int SparseMatrix::getNonZeroElements(int** matrix)
{
	int count = 0;
	for (int i = 0; i < matrixR; i++)
	{
		for (int j = 0; j < matrixC; j++)
		{
			if (matrix[i][j] != 0)
				count++;
		}
	}
	return count;
}

void SparseMatrix::convertThatThang(int** matrix)
{
	int currNonzeroOccurence = 0;
	for (int i = 0; i < matrixR; i++)
	{
		for (int j = 0; j < matrixC; j++)
		{
			if (matrix[i][j] != 0)
			{
				this->twoDArr[0][currNonzeroOccurence] = i;
				this->twoDArr[1][currNonzeroOccurence] = j;
				this->twoDArr[2][currNonzeroOccurence] = this->theMatrix[i][j];
				currNonzeroOccurence++;
			}
		}
	}
}

int** SparseMatrix::get2DArr()
{
	return twoDArr;
}

void SparseMatrix::display()
{
	for (int i = 0; i < this->numNonZeroElements; i++)
	{
		std::cout << twoDArr[0][i] << "\n";
		std::cout << twoDArr[1][i] << "\n";
		std::cout << twoDArr[2][i] << "\n\n";
	}
}

