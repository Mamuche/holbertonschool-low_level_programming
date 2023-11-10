#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings.
 * @s1: first string to concat.
 * @s2: second string to concat.
 * @n: number to char to print in s2.
 *
 * Return: pointer to the new string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i = 0, j = 0, k;

	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		i++;
	}

	if (s2 != NULL)
	{
		while (s2[j] != '\0')
		j++;
	}

	if (n < j)
		j = n;

	s3 = malloc((i + j + 1) * sizeof(char));

	if (s3 == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		s3[k] = s1[k];
	i = k;
	for (k = 0; k < j; k++)
	{
		s3[i] = s2[k];
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
