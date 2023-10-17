#include <stdio.h>
/**
 * main - print all combinaison of number.
 *
 * Return: always 0.
 */

int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar('0' + number);
		if (number == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
