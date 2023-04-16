// C program to calculate the sum of individual rows and columns of a m x n size matrix
#include <stdio.h>
#define MAX 20

int main()
{
    // declaration of variables
    int a[MAX][MAX], row, col, i, j, rowSum, colSum;

    // taking rows and columns of matrix
    printf("Enter the number of rows and column of matrix:\n");
    scanf("%d %d", &row, &col);

    // taking elements of matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter the elements: ");
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n");
    // printing the sum of individual rows
    printf("Sum of rows....\n");
    for (int i = 0; i < row; i++)
    {
        rowSum = 0;
        for (int j = 0; j < col; j++)
        {
            rowSum = rowSum + a[i][j];
        }
        printf("Sum of elements in row %d: %d\n", i, rowSum);
    }

    printf("\n");
    // printing the sum of individual columns
    printf("Sum of columns....\n");
    for (int i = 0; i < row; i++)
    {
        colSum = 0;
        for (int j = 0; j < col; j++)
        {
            colSum = colSum + a[j][i];
        }
        printf("Sum of elements in column %d: %d\n", i, colSum);
    }
    return 0;
}