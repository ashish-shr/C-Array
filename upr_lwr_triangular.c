// C program to convert a m x m size matrix to upper-triangular and lower-triangular matrix
#include <stdio.h>
#define MAX 20

int main()
{
    // declaration of variables
    int usrMat[MAX][MAX], uprMat[MAX][MAX], lwrMat[MAX][MAX], size, row, col;

    // taking size of square matrix
    printf("Enter the size of matrix: ");
    scanf("%d", &size);
    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            printf("Enter the element: ");
            scanf("%d", &usrMat[row][col]);
        }
    }

    // finding upper-triangular matrix
    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            if (row > col)
            {
                uprMat[row][col] = 0;
            }
            else
            {
                uprMat[row][col] = usrMat[row][col];
            }
        }
    }

    // finding lower-triangular matrix
    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            if (col > row)
            {
                lwrMat[row][col] = 0;
            }
            else
            {
                lwrMat[row][col] = usrMat[row][col];
            }
        }
    }

    // printing upper-triangular matrix
    printf("Upper triangular matrix...........\n");
    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            printf("%d\t", uprMat[row][col]);
        }
        printf("\n");
    }
    printf("\n");

    // printing lower-triangular matrix
    printf("lower triangular matrix...........\n");
    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            printf("%d\t", lwrMat[row][col]);
        }
        printf("\n");
    }
    return 0;
}