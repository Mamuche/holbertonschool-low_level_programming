#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator: string to be printes between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *c;
	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(str, char *);

		if (!c || c == NULL)
			c = "(nil)";

		if (i == n - 1)
			separator = "";

		if (!separator)
			printf("%s", c);

		printf("%s%s", c, separator);
	}
	printf("\n");
	va_end(str);
}
