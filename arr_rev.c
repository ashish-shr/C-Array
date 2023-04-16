// Program to reverse the 1D array
#include <stdio.h>
#define MAX 40

int main()
{
  // declaration of variables
  int a[MAX], n, i, tmp;

  // taking the size of array
  printf("Enter the size: ");
  scanf("%d", &n);

  // taking the elements of array
  for (i = 0; i < n; i++)
  {
    printf("Enter the elements: ");
    scanf("%d", &a[i]);
  }

  // reversing the array
  for (i = 0; i < n / 2; i++)
  {
    tmp = a[i];
    a[i] = a[n - i - 1];
    a[n - i - 1] = tmp;
  }

  // printing the reversed array
  printf("Reversed array is:\n");
  for (i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }

  return 0;
}