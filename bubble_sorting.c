#include <stdio.h>
#define MAX 50
int main()
{
  int i, j, a[MAX], n, tmp;
  printf("Enter size of array: ");
  scanf("%d", &n);
  printf("Enter the elements:\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  for (i = 0; i < n - 1; i++)
  {
    for (j = 0; j < n - i - 1; j++)
    {
      if (a[j] > a[j + 1])
      {
        tmp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = tmp;
      }
    }
  }

  printf("Array after Bubble Sort: ");
  for (i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }

  return 0;
}