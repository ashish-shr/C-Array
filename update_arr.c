// Updation of Array
#include <stdio.h>
#define max 50
int main()
{
  int a[max], n, i;
  int pos, newVal;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  printf("Enter the elements:\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("Enter the position to update: ");
  scanf("%d", &pos);
  printf("Enter the new value: ");
  scanf("%d", &newVal);
  for (i = 0; i < n; i++)
  {
    if ((pos - 1) == i)
    {
      a[i] = newVal;
      break;
    }
  }
  printf("Array after updation: ");
  for (i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }
  return 0;
}