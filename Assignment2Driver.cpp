#include "SparseMatrix.h"
#include <iostream>

int main()
{
    //define the original matrix
    int** matrix = new int* [4];
    for (int j = 0; j < 4; j++)
    {
        matrix[j] = new int[5];
    }
    matrix[0][0] = 0;
    matrix[0][1] = 0;
    matrix[0][2] = 3;
    matrix[0][3] = 0;
    matrix[0][4] = 4;

    matrix[1][0] = 0;
    matrix[1][1] = 0;
    matrix[1][2] = 5;
    matrix[1][3] = 7;
    matrix[1][4] = 0;

    matrix[2][0] = 0;
    matrix[2][1] = 0;
    matrix[2][2] = 0;
    matrix[2][3] = 0;
    matrix[2][4] = 0;

    matrix[3][0] = 0;
    matrix[3][1] = 2;
    matrix[3][2] = 6;
    matrix[3][3] = 0;
    matrix[3][4] = 0;


    //convert to and display sparse matrix
    SparseMatrix* awesomeSauce = new SparseMatrix(matrix, 4, 5);
    awesomeSauce->display();
}
