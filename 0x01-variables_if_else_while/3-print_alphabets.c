#include <stdlib.h>
#include <stdio.h>

/**
 * main - lower alphabet and then uppercase
 * Description: char
 * return: Always (0) success
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
