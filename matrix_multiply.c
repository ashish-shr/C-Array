#include <stdio.h>
#include <stdlib.h>
int main()
{
    int result, sum = 0;
    int a[2][2], b[2][2], prod[2][2];
    printf("Elements of Matrix 1:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Elements of Matrix 2:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            prod[i][j] = sum;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            printf("%d\t", prod[i][j]);

        printf("\n");
    }

    return 0;
}
