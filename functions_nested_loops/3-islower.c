#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c : character
 *
 * Return: 1 if c is lowercase, then 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
