#include "main.h"

/**
 * *_strncpy - copies a string.
 * @dest: pointer to destination.
 * @src: pointer to source.
 * @n: number of bytes from src.
 *
 * Return: destination.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
