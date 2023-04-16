// Program to separate odd and even integers into two separate arrays
#include <stdio.h>
#define MAX 30

int main()
{
    // declaration of variables
    int a[MAX], even[MAX], odd[MAX], n, i, evenIndex = 0, oddIndex = 0;

    // taking the size of array
    printf("Enter the size: ");
    scanf("%d", &n);

    // taking the elements of array
    for (i = 0; i < n; i++)
    {
        printf("Enter the element: ");
        scanf("%d", &a[i]);
    }

    // separating even and odd elements
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even[evenIndex] = a[i];
            evenIndex++;
        }
        else
        {
            odd[oddIndex] = a[i];
            oddIndex++;
        }
    }

    // printing the even and odd array
    printf("Even Array: ");
    for (i = 0; i < evenIndex; i++)
    {
        printf("%d ", even[i]);
    }

    printf("\nOdd Array: ");
    for (i = 0; i < oddIndex; i++)
    {
        printf("%d ", odd[i]);
    }
    return 0;
}