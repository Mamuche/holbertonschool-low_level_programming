#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 /**
  *main - print single digit numbers of base 10
  *
  *Return: always 0
  */

int main(void)
{
	int singleDigit = 0;

	while (singleDigit < 10)
	{
		putchar(singleDigit + '0');
		singleDigit++;
	}
	putchar('\n');

	return (0);
}
