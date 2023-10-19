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
			
			_putchar((res / 10) + '0');
			_putchar((res % 10) + '0');
			_putchar(',');
			_putchar(' ');

			if (res <= 9)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
