#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using.
 * @b: integer
 *
 * Return: a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b * sizeof(char));

	if (a == NULL)
		exit(98);

	return (a);
}
