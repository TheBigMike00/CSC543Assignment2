class SparseMatrix
{
private:
	int numNonZeroElements; //This can effectively be used as length(cols) of new 2D array
	int** theMatrix;
	int** twoDArr;
	int matrixR;
	int matrixC;
	int getNonZeroElements(int** matrix);
	void convertThatThang(int** matrix);

public:
	SparseMatrix(int** matrix, int matrixRows, int matrixCols);
	int** get2DArr();
	void display();

};