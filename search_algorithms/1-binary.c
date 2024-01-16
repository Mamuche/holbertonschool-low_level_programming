#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers,
 * using the Binary search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value:  is the value to search for.
 *
 * Return:the index where value is located.
*/

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int i;

	if (!value || array == NULL)
		return (-1);


	while (left <= right)
	{

		int middle = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);

			if (i < right)
				printf(", ");
		}
		printf("\n");

		if (array[middle] == value)
			return (middle);

		if (array[middle] > value)
			right = middle - 1;

		else
		{
			left = middle + 1;
		}
	}
	return (-1);

}
