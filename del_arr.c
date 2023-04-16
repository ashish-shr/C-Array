// Deletion of array
#include <stdio.h>
#define max 50
int main()
{
  int a[max], n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int del, i, index = -1;
  printf("Enter the elements:\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("Enter element to delete\n");
  scanf("%d", &del);

  for (i = 0; i < n; i++)
  {
    if (a[i] == del)
    {
      index = i;
      break;
    }
  }

  if (index == -1)
  {
    printf("Element Not Found\n");
  }
  else
  {
    for (i = index; i < n - 1; i++)
    {
      a[i] = a[i + 1];
    }
    printf("New Array : ");
    for (i = 0; i < n - 1; i++)
    {
      printf("%d ", a[i]);
    }
  }

  return 0;
}