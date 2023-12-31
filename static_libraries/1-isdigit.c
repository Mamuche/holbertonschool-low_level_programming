#include "main.h"

/**
 * _isdigit - checks for a digit 0 to 9.
 * @c: char.
 *
 * Return: 1 if c is digit, then 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
