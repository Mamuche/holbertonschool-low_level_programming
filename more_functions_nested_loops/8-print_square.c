#include "main.h"

/**
 * print_square - print square with # character, followed by a new line.
 * @size: is the size of the square.
 */

void print_square(int size)
{
	int hauteur, largeur;

	if (size > 0)
	{
		for (hauteur = 0; hauteur < size; hauteur++)
		{
			for (largeur = 0; largeur < size; largeur++)
				_putchar('#');

			if (hauteur == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
