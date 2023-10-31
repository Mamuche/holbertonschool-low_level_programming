#include <stdio.h>

/**
 * main - entry point.
 * @argc: number of cmd line arguments
 * @argv: array of size argc
 * Return: Always 0.
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
