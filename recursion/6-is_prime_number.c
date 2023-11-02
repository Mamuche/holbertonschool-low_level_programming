#include "main.h"

/**
 * is_divi - add function for is_prime_number function.
 * @num: number.
 * @div: diviseur.
 *
 * Return: 0 its divisible, else 1.
 */

int is_divi(int num, int div)
{
	if (div == (num / 2))
		return (1);

	if ((num % div) == 0)
		return (0);

	return (is_divi(num, div + 1));
}



/**
 * is_prime_number - return 1 if is prime number, if else 0.
 * @n:base number.
 *
 * Return: i.
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divi(n, div));
}
