// Program to find the occurrence of given element in 1D array.
#include <stdio.h>
#define MAX 30

int main()
{
    // declaration of variables
    int a[MAX], n, i, count = 0, chk;

    // taking the size of array
    printf("Enter the size: ");
    scanf("%d", &n);

    // taking the elements of array
    for (i = 0; i < n; i++)
    {
        printf("Enter the element: ");
        scanf("%d", &a[i]);
    }

    // taking the number whose frequency need to be checked
    printf("Check frequency: ");
    scanf("%d", &chk);

    // checking the frequency
    for (i = 0; i < n; i++)
    {
        if (a[i] == chk)
        {
            count++;
        }
    }

    // printing the frequency of element
    printf("%d occurs %d times!\n", chk, count);

    return 0;
}