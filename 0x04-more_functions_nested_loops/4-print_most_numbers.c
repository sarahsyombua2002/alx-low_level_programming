#include <unistd.h>
#include <stdio.h>

/**
 * print_most_numbers - writes the numbers 0 to 9
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_most_numbers(void)
{
	int i = 0

	for (i = 0; i < 10; i++)
	{
	if (i == 2 || i == 4)
	{
	putchar(i + '0');
	}
	}
	putchar('\n');
}
