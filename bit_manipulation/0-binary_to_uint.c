#include "main.h"

/**
 * binary_to_uint - converts a bniary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number or 0.
*/

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int sum = 0, binary = 1;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	i--;

	while (i >= 0)
	{
		if (b[i] == '1')
			sum = sum + binary;
		binary = binary * 2;
		i--;
	}
	return (sum);
}
