// Insertion of array
#include <stdio.h>
#define max 50
int main()
{
  int a[max], n, i;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  printf("Enter the elements:\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("Array after insertion : ");
  for (i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }
  return 0;
}