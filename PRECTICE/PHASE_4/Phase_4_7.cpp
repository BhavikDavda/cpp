#include <iostream>
using namespace std;

void addMatrices(int mat1[3][3], int mat2[3][3], int result[3][3]) 
{
    for (int i = 0; i < 3; ++i) 
	{
        for (int j = 0; j < 3; ++j) 
		{
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void displayMatrix(int mat[3][3]) 
{
    for (int i = 0; i < 3; ++i) 
	{
        for (int j = 0; j < 3; ++j) 
		{
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() 
{
    int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int resultMatrix[3][3];

    addMatrices(matrix1, matrix2, resultMatrix);

    cout << "Result Matrix:" << endl;
    displayMatrix(resultMatrix);

    return 0;
}

