#include <stdlib.h>
#include <stdio.h>

/**
 * _strcmp - function that compares two strings
 * @s1: string
 * @s2: string
 *
 * Return: Always (0) success
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}
