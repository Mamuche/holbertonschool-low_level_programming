#include <stdio.h>
/**
 *main - print alphabet lowercase and uppercase
 *
 *Return: alway 0
 */

int main(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}
		return (0);
}
