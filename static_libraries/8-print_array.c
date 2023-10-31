#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array.
 * @a: pointeur to integer.
 * @n: the number of elements of the array.
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x == 0)
		{
			printf("%d", a[x]);
		}
		else
		{
			printf(", %d", a[x]);
		}
	}
	printf("\n");
}
