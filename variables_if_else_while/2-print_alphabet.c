#include <stdio.h>
/**
 *main - print the alphabet
 *
 *Return: always 0
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
