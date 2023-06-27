#include <stdlib.h>
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: Always (0) success
 */

void puts_half(char *str)

{
	int i = 0;
	int len = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	if (len % 2 == 0)
		i = len / 2;
	else
		i = (len + 1) / 2;
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
		putchar('\n');

}
