#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: lower alphabet and then uppercase
 *
 * Return: Always (0) success
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
