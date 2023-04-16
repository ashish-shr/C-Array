// C program to find diagonal elements of matrix
// diagonal elements exists only in case of square matrix
#include <stdio.h>
#define MAX 20

int main()
{
    // declaration of variables
    int a[MAX][MAX], size, row, col;

    // taking size of square matrix
    printf("Enter the size of matrix: ");
    scanf("%d", &size);

    // taking elements of matrix
    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            printf("Enter the element: ");
            scanf("%d", &a[row][col]);
        }
    }

    // printing sum of elements of lower-triangular matrix
    printf("Diagonal elements:\n");
    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            if (row == col)
            {
                printf("%d\n", a[row][col]);
            }
        }
    }

    return 0;
}