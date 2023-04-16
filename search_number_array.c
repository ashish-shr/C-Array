#include <stdio.h>
int main()
{
    int i, a[5], n, match;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the number:");
        scanf("%d", &a[i]);
    }
    printf("Enter the number you want to search:");
    scanf("%d", &n);
    match = 0;
    for (i = 0; i < 5; i++)
    {

        if (a[i] == n)
        {
            match = 1;
            break;
        }
    }
    if (match == 1)
    {
        printf("Search found!");
    }

    else
    {
        printf("Search not found!");
    }

    return 0;
}