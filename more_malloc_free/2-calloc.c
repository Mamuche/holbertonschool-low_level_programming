#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array.
 * @nmemb: number of elements in the array.
 * @size: size of the elements.
 *
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	a = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (a == 0)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		(a[i] = '\0');

	return (a);
}
