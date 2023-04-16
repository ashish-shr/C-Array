// Program to copy the elements of one 1D array into another 1D array.
#include <stdio.h>
#define MAX 50

int main()
{
    // declaration of variables
    int a[MAX], b[MAX], i, n;

    // taking the size of array
    printf("size of array: ");
    scanf("%d", &n);

    // taking elements for 1st array
    for (i = 0; i < n; i++)
    {
        printf("Enter the element for 1st array: ");
        scanf("%d", &a[i]);
    }

    // copying the 1st array into another array
    for (i = 0; i < n; i++)
    {
        b[i] = a[i];
    }

    // printing the array after copying
    printf("2nd array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}