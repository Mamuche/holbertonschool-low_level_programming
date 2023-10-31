#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: integer.
 * @n: number of elements of the array.
 */

void reverse_array(int *a, int n)
{
	int start, middle, end, temp;

	middle = n / 2;
	end = n - 1;

	for (start = 0; start < middle; start++)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		end--;
	}
}
