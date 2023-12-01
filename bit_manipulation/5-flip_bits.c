#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip.
 * @n: the first number to flip.
 * @m: the second number to flip.
 *
 * Return:number of bits.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
/*calculate the difference between 'n' and 'm' using '^'*/
/*the result stock 0 if the bits are the same or 1 if they are similar*/
	unsigned long int diff = n ^ m;

	while (diff)
	{
/*if = 1(note similar) count is increased by 1.*/
		count += (diff & 1);
/*shifts all bits to one position to the right to move to the next bit*/
		diff >>= 1;
	}

	return (count);
}
