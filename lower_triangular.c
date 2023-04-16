// C program to convert a m x m size matrix to lower-triangular matrix
#include <stdio.h>
#define MAX 20

int main()
{
    // declaration of variables
    int usrMat[MAX][MAX], size, row, col;

    // taking size of square matrix
    printf("Enter the size of matrix: ");
    scanf("%d", &size);

    // taking the elements of matrix
    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            printf("Enter the element: ");
            scanf("%d", &usrMat[row][col]);
        }
    }

    // finding lower-triangular matrix
    for (col = 1; col < size; col++)
    {
        for (row = 0; row < col; row++)
        {
            usrMat[row][col] = 0;
        }
    }

    // printing lower-triangular matrix
    printf("Lower triangular matrix...........\n");
    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            printf("%d\t", usrMat[row][col]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}