// C program to find sum of elements of upper triangular matrix
#include <stdio.h>
#define MAX 20

int main()
{
    // declaration of variables
    int usrMat[MAX][MAX], size, row, col, sum = 0;

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
    for (row = 1; row < size; row++)
    {
        for (col = 0; col < row; col++)
        {
            usrMat[row][col] = 0;
        }
    }

    // printing sum of elements of upper-triangular matrix
    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            sum = sum + usrMat[row][col];
        }
    }
    printf("\nSum of elements of upper triangular matrix: %d", sum);

    return 0;
}