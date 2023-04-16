// C program to interchange two columns of a matrix

#include <stdio.h>
#define MAX 20

int main()
{
    // declaration of variables
    int a[MAX][MAX], rows, cols, i, j, col, pos, tmp;

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

    // taking the column and position to exchange
    printf("Enter the column to interchange: ");
    scanf("%d", &col);
    printf("Enter the position to interchange: ");
    scanf("%d", &pos);

    // interchanging the columns
    for (i = 0; i < rows; i++)
    {
        tmp = a[i][pos - 1];
        a[i][pos - 1] = a[i][col - 1];
        a[i][col - 1] = tmp;
    }

    // printing the matrix after column interchanging
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