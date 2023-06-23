#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	
	if (n < 0)
	{
		putchar('-');
	} else
	{
		n = -n;
	}

	if (n / 10)
	{
		print_number(n / 10);
	}

	putchar((n % 10) + '0');
	int main(void)
	{
		print-number(98);
		putchar('\n);
		return (0);
	}	
}
