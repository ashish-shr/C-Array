// Program to find the frequency of each element in 1D array.
#include <stdio.h>
#define MAX 30

int main()
{
    // declaration of variables
    int a[MAX], flag[MAX] = {0}, n, i, j, count;

    // taking the size of array
    printf("Enter the size: ");
    scanf("%d", &n);

    // taking the elements of array
    for (i = 0; i < n; i++)
    {
        printf("Enter the element: ");
        scanf("%d", &a[i]);
    }

    // Counting frequency of each element and printing
    for (i = 0; i < n; i++)
    {
        if (flag[i] != 1)
        {
            count = 0;
            for (j = 0; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    count++;
                    flag[j] = 1;
                }
            }
            printf("%d occurs %d times.\n", a[i], count);
        }
    }

    return 0;
}
