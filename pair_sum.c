// Program to find a pair of elements which equal the given sum in the 1D array
#include <stdio.h>
#define MAX 30

int main()
{
    // declaration of variables
    int a[MAX], n, i, j, sum = 0;

    // taking the size of array
    printf("Enter the size: ");
    scanf("%d", &n);

    // taking the elements of array
    for (i = 0; i < n; i++)
    {
        printf("Enter the element: ");
        scanf("%d", &a[i]);
    }

    // taking the sum
    printf("Enter the sum: ");
    scanf("%d", &sum);

    // checking for pair that addup to the sum
    // also printing the pair
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == sum)
            {
                printf("\nPair: %d and %d", a[i], a[j]);
            }
        }
    }

    return 0;
}