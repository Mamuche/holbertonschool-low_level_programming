#include "main.h"
#include <string.h>

/**
 * _strlen - return the length of a string.
 * @s: pointer.
 *
 * Return: number of character.
 */

int _strlen(char *s)
{
	int nbc;

	for (nbc = 0; s[nbc] != '\0'; nbc++)
		;

	return (nbc);
}
