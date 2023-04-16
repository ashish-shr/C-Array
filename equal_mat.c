// C program to check whether the two matrix are equal or not
#include <stdio.h>
#define MAX 20

int main()
{
    // declaration of variables
    int a[MAX][MAX], b[MAX][MAX], row1, col1, row2, col2, i, j, flag = 0;

    // taking rows and columns of 1st matrix
    printf("Enter the row and column of 1st matrix: ");
    scanf("%d %d", &row1, &col1);

    // taking rows and columns of 2nd matrix
    printf("Enter the row and column of 2nd matrix: ");
    scanf("%d %d", &row2, &col2);

    // checking whether the two matrix are equal or not
    if (row1 == row2 && col1 == col2)
    {
        // taking elements of 1st matrix
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col1; j++)
            {
                printf("Enter the element of 1st matrix: ");
                scanf("%d", &a[i][j]);
            }
        }

        printf("\n");
        // taking elements of 2nd matrix
        for (i = 0; i < row2; i++)
        {
            for (j = 0; j < col2; j++)
            {
                printf("Enter the element of 2nd matrix: ");
                scanf("%d", &b[i][j]);
            }
        }

        // checking the elements
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col2; j++)
            {
                if (a[i][j] == b[i][j])
                {
                    flag = 1;
                    break;
                }
            }
        }

        // printing whether matrices are equal or not
        if (flag == 1)
        {
            printf("Two matrices are equal!\n");
        }
        else
        {
            printf("Two matrices are not equal!\n");
        }
    }
    else
    {
        printf("Matrices cannot be compared!\n");
    }

    return 0;
}