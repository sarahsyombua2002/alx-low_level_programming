#include <unistd.h>
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line
 * @n: The number of times the character is to draw lines
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	} else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					putchar('\\');
				else if (j < i)
					putchar(' ');
			}
			putchar('\n');
		}
	}
}
