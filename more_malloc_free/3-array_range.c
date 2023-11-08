#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creates an array of integers.
 * @min: start value.
 * @max: end value.
 *
 * Return: the pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *a;
	int i, j = 0;

	if (min > max)
		return (NULL);

	a = malloc((max - min + 1) * sizeof(int));

	if (a == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		a[j] = i;
		j++;
	}
	return (a);
}
