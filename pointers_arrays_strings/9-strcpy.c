#include "main.h"

/**
 * *_strcpy - copies the string.
 * @dest:pointer to destination.
 * @src: pointer to source.
 *
 * Return: pointer to destination.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
