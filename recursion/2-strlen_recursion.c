#include "main.h"

/**
 * _strlen_recursion - return the length of a string.
 * @s: pointer to the string.
 *
 * Return: Number of length.
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
