// Program to print all unique elements of 1D array
#include <stdio.h>
#define MAX 30

int main()
{
    // declaration of variables
    int a[MAX], n, i, j, flag;

    // taking the size of array
    printf("Enter the size: ");
    scanf("%d", &n);

    // taking the elements of array
    for (i = 0; i < n; i++)
    {
        printf("Enter the element: ");
        scanf("%d", &a[i]);
    }

    // checking for duplicates and printing the unique elements
    printf("Unique elements: ");
    for (i = 0; i < n; i++)
    {
        flag = 0;
        for (j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}