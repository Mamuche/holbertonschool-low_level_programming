#include "main.h"

/**
 * swap_int - swaps two values of two integers.
 * @a: number.
 * @b: number.
 */

void swap_int(int *a, int *b)
{
	int tempo = *b;
	*b = *a;
	*a = tempo;
}
