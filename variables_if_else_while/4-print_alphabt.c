#include <stdio.h>
/**
 *main - print alphabet exept E and Q
 *
 *Return: always 0
 */

int main(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
