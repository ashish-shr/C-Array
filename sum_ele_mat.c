// C program to find the sum of all elements of a matrix
#include <stdio.h>
#define MAX 20

int main()
{
    // declaration of variables
    int a[MAX][MAX], row, col, i, j, sum = 0;

    // taking row and column of a matrix
    printf("Enter the rows and columns of matrix: ");
    scanf("%d %d", &row, &col);

    // taking the elements of matrix
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter the element: ");
            scanf("%d", &a[i][j]);
        }
    }

    // finding sum of elements
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            sum = sum + a[i][j];
        }
    }

    // printing the sum of elements of a matrix
    printf("Sum of the elements: %d", sum);

    return 0;
}