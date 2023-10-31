#include "main.h"

/**
 * _atoi - convert a string in integer.
 * @s: input string.
 *
 * Return: value of resultat.
 */

int _atoi(char *s)
{
	int x, mini, res, boolean;

	x = mini = res = boolean = 0;
	mini = -1;

	while (s[x] != '\0')
	{
		if (s[x] == '-')
			mini *= -1;
		if (s[x] >= '0' && s[x] <= '9')
		{
			res *= 10;
			res -= (s[x] - '0');
			boolean = 1;
		}
		else if (boolean == 1)
			break;
		x++;
	}
	res *= mini;
	return (res);
}
