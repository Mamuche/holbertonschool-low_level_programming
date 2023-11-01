#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point.
 * @argc: number of cmd line arguments.
 * @argv: array of size argc.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;
	
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
		}
		printf("%s\n", argv[i]);
		return (0);
	}
	else if (argc < '0') 
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("'0'\n");
	}
	return (0);
}
