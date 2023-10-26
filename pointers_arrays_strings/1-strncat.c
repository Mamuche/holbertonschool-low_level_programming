#include "main.h"

/**
 * *_strncat - concatenates two strings.
 *@dest: pointer to destination.
 *@src: pointer to source.
 *@n: number of bytes from src.
 *
 * Return: destination.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	for (; src[j] && j < n; i++)
	{
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
