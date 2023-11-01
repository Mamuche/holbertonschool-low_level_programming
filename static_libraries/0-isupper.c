#include "main.h"

/**
 * _isupper - check for uppercase character.
 * @c : character
 *
 * Return: 1if c is uppercase, then 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
