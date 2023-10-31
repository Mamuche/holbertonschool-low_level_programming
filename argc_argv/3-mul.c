#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point.
 * @argc: number of cmd line arguments.
 * @argv: array of size argc.
 * Return: 0 or 1 if error.
 */

int main(int argc, char *argv[])
{
	int mul, num1, num2;

	if (argc > 1)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;

		printf("%d\n", mul);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
