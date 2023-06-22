#include <unistd.h>
#include <stdio.h>

/**
 * more_numbers - print 0 to 14 ten times
 * 
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
		for (j = 0; j < 15; j++)
			if (j < 10)
			{
				putchar (j + '0');
			}
			else
			{
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
			}
}
