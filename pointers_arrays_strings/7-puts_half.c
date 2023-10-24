#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: pointer to string.
 */

void puts_half(char *str)
{
	int i, middle, end;

	for (i = 0; str[i]; i++)
		;

	middle = i / 2;
	end = i - 1;

	for (middle = (i / 2); middle <= end; middle++)
	{
		_putchar(str[middle]);
	}
	_putchar('\n');
}
