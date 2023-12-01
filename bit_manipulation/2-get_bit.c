#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: unsigned integer.
 * @index: index to return.
 *
 * Return: value of the bit at index or -1 if an error occured.
*/

int get_bit(unsigned long int n, unsigned int index)
{
/*check if 'index' exceeds the total size of number 'n'.*/
/*sizeof = 'octet' -> x8 size = bit.*/
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

/*shift the number 'n' by 'index' starting from the end.*/
	n = n >> index;

/*if n(bit rightmost) = 1 return 1, else return 0.*/
	if (n & 1)
		return (1);

	return (0);
}
