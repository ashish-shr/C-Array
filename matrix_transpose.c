#include <stdio.h>
#define MAX 50

int main()
{
    // declaration of variables
    int a[MAX][MAX], row, col, i, j;

    // taking rows and columns of matrix
    printf("Enter the rows and cols for the matrix:\n");
    scanf("%d %d", &row, &col);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter the element:\n");
            scanf("%d", &a[i][j]);
        }
    }

    // transposing the matrix and printing
    printf("Matrix after transposing:\n");
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}