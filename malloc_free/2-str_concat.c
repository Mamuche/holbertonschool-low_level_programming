#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings in one other.
 *
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer to newly string.
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i = 0, j = 0, k;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

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
