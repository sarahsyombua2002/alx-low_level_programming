#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - function that returns the lenght of a string
 * @s: strlen
 *
 * Return: Always (0) success
 */

int _strlen(char *s)

{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
