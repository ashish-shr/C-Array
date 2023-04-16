// program to delete duplicate elements in 1D array
#include <stdio.h>
#define MAX 30

int main()
{
    // declaration of variables
    int a[MAX], n, i, j, k;

    // taking the size of array
    printf("Enter the size: ");
    scanf("%d", &n);

    // taking the elements of array
    for (i = 0; i < n; i++)
    {
        printf("Enter the element: ");
        scanf("%d", &a[i]);
    }

    // checking and deleting the duplicate elements
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                for (k = j; k < n - 1; k++)
                {
                    a[k] = a[k + 1];
                }
                n--;
                j--;
            }
        }
    }

    // printing the array after deleting duplicates
    printf("After deleting duplicate elements: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}