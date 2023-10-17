#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - print alphabet in reverse.
*
* Return: always 0.
*/

int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
		putchar(x);

	putchar('\n');

	return (0);
}
