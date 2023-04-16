// Program to merge two 1D arrays into another 1D array
#include <stdio.h>
#define MAX 50

int main()
{
	// declaration of variables
	int a[MAX], b[MAX], c[2 * MAX], i, n, pos;

	// taking the size of array
	printf("size of array: ");
	scanf("%d", &n);

	// taking elements for 1st array
	for (i = 0; i < n; i++)
	{
		printf("Enter the element for 1st array: ");
		scanf("%d", &a[i]);
	}

	// taking elements for 2nd array
	for (i = 0; i < n; i++)
	{
		printf("Enter the element for 2nd array: ");
		scanf("%d", &b[i]);
	}

	// alternate merging the array
	pos = 0;
	for (i = 0; i < n; i++)
	{
		c[pos] = a[i];
		pos += 2;
	}

	pos = 1;
	for (i = 0; i < n; i++)
	{
		c[pos] = b[i];
		pos += 2;
	}

	// printing the array after alternate merging
	printf("Array after alternate merging:\n");
	for (i = 0; i < (2 * n); i++)
	{
		printf("%d ", c[i]);
	}

	return 0;
}