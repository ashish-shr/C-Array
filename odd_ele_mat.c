// C program to find odd elements of a matrix
#include <stdio.h>
#define MAX 50

int main()
{
    // declaration of variables
    int a[MAX][MAX], row, col, i, j;

    // taking rows and columns of matrix
    printf("Enter the rows and cols for the matrix:\n");
    scanf("%d %d", &row, &col);

    // taking elements of matrix
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter the element:\n");
            scanf("%d", &a[i][j]);
        }
    }

    // finding odd elements of matrix and printing them
    printf("Odd elements:\n");
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            if ((a[i][j] % 2) != 0)
            {
                printf("%d", a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}