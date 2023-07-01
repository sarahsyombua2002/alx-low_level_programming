#include <stdio.h>

/**
 * main - Entry point
 * Description: prints possible different combinations of three digits
 *
 * Return: Always (0) success
 */

int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 0; i < 8; i++)
	{
	for (j = i + 1; j < 9; j++)
	{
	for (k = j + 1; k <= 9; k++)
	{
		putchar(i + '0');
		putchar(j + '0');
		putchar(k + '0');
		if (i != 7 || j != 8 || k != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	}
	}
	putchar('\n');
	return (0);
}

