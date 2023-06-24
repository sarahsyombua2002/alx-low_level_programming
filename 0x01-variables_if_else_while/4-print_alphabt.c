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
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	if (c != 'e' && c != 'q')
		putchar(c);
	}
	putchar('\n');
	return (0);
}
