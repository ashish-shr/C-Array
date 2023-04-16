#include <stdio.h>
int main()
{
    int i, a[10], fLargest, sLargest;
    for (i = 0; i < 10; i++)
    {
        printf("Enter the number:");
        scanf("%d", &a[i]);
    }
    fLargest = a[0];
    for (i = 0; i < 10; i++)
    {
        if (fLargest < a[i])
        {
            fLargest = a[i];
        }
    }
    sLargest = a[0];
    for (i = 1; i < 10; i++)
    {
        if (a[i] > sLargest && a[i] < fLargest)
        {
            sLargest = a[i];
        }
    }
    printf("Largest = %d", fLargest);
    printf("Second Largest = %d", sLargest);

    return 0;
}