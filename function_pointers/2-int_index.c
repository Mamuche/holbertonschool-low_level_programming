#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that searches for an integer.
 *
 * @array: pointer to the array.
 * @size: number of elements in the array.
 * @cmp: pointer to the function to compares values.
 *
 * Return: the index of the element or,
 * -1 if no element matches,
 * -1 if size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int (*p)(int);

	p = cmp;

	if (size <= 0)
	{
		return (-1);
	}

	if (!array || !cmp)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (p(array[i]) && array[i] != 0)
		{
			return (i);
		}
		if (i == size - 1)
		{
			return (-1);
		}
	}
	return (i);
}
