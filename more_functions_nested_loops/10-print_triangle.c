#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int n, i;

	if (size > 0)
	{
		for (n = 1; n <= size; n++)
		{
			for (i = size - n; i > 0; i--)
				_putchar(' ');

			for (i = 0; i < n; i++)
				_putchar('#');

			if (n == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
