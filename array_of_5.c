#include <stdio.h>
int main()
{
    float a[5] = {2, 3.5, 5, 6, 7};
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%f\n", a[i]);
    }
    return 0;
}