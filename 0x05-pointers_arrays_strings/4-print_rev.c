#include <stdlib.h>
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: string
 *
 * Return: Always (0) success
 */

void print_rev(char *s)

{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		putchar (s[i]);
		i--;
	}
	putchar('\n');
}
