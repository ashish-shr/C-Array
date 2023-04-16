// C program to interchange two rows of a matrix

#include <stdio.h>
#define MAX 20

int main()
{
    // declaration of variables
    int a[MAX][MAX], rows, cols, i, j, row, pos, tmp;

    // taking the rows and columns of matrix
    printf("Enter the rows and columns:\n");
    scanf("%d %d", &rows, &cols);

    // taking the elements of matrix
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Enter the element: ");
            scanf("%d", &a[i][j]);
        }
    }

    // taking the row and position to exchange
    printf("Enter the row to interchange: ");
    scanf("%d", &row);
    printf("Enter the position to interchange: ");
    scanf("%d", &pos);

    // interchanging the rows
    for (i = 0; i < cols; i++)
    {
        tmp = a[row - 1][i];
        a[row - 1][i] = a[pos - 1][i];
        a[pos - 1][i] = tmp;
    }

    // printing the matrix after row interchanging
    printf("Matrix after interchanging:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}