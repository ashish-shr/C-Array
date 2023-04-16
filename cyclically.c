// Program to cyclically permute the elements of 1D array
#include <stdio.h>
#define MAX 30

int main()
{
    // declaration of variables
    int a[MAX], n, i, tmp;

    // taking the size of array
    printf("Enter the size: ");
    scanf("%d", &n);

    // taking the elements of array
    for (i = 0; i < n; i++)
    {
        printf("Enter the element: ");
        scanf("%d", &a[i]);
    }

    // cyclically permuting the elements
    tmp = a[0];
    for (i = 0; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    a[n - 1] = tmp;

    // printing the array
    printf("Array after cyclically: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}