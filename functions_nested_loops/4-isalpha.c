#include "main.h"

/**
 * _isalpha - checks alphabetic character.
 * @c : character lowercase or uppercase.
 *
 * Return: 1 if c is letter lowercase or uppercase, then 0.
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
