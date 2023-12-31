#include <stdlib.h>
#include <stdio.h>

/**
 * _atoi - convert a string to an integer.
 * @s: char string
 * Return: Always (0) success
 */

int _atoi(char *s)
{
	int sign = 1;
	int res = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10 + s[i] - '0';
		}
		else if (res > 0)
		{
			break;
		}
		i++;
	}

	return (sign * res);
}
