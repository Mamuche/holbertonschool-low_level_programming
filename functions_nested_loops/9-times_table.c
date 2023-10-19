#include "main.h"

/**
 * times_table - prints the 9 times table
 */

void times_table(void)
{
	int num, mul, res;

	for (num = 0; num <= 9; num++)
	{
		for (mul = 0; mul <= 9; mul++)
		{
			res = num * mul;
			if (res > 9)
				_putchar((res / 10) + '0');
			else
				_putchar(' ');
			_putchar((res % 10) + '0');
			if (mul != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
