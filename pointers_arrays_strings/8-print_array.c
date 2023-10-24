#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array.
 * @a: pointeur to integer.
 * @n: the number of elements of the array.
 */

void print_array(int *a, int n)
{
	for (n = 0; n < 5; n++)
	{
		printf("%d, ", a[n]);
	}
	printf("\n");
}
