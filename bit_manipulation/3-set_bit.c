#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to usigned long int.
 * @index: index of the bit to set.
 *
 * Return: 1 if it worked or -1 if an error occured.
*/

int set_bit(unsigned long int *n, unsigned int index)
{
/*check if 'index' exceeds the total size of number 'n'.*/
/*sizeof = 'octet' -> x8 size = bit.*/
if (index > sizeof(unsigned long int) * 8 || n == NULL)
	return (-1);

/*replaces the bit with 1 in 'n' at the given.*/
*n |= (1 << index);

	return (1);

}
