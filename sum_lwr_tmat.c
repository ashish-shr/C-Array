// C program to find sum of elements of lower triangular matrix
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

    // finding lower-triangular matrix
    for (col = 1; col < size; col++)
    {
        for (row = 0; row < col; row++)
        {
            usrMat[row][col] = 0;
        }
    }

    // printing sum of elements of lower-triangular matrix
    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            sum = sum + usrMat[row][col];
        }
    }
    printf("\nSum of elements of lower triangular matrix: %d", sum);

    return 0;
}