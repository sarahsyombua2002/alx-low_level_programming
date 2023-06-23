#include <unistd.h>

/**
 * print_number - writes an integer
 * @i: unsigned integer
 * @n :The number of integer
 * Return: On success .
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		putchar(45);
		(--i);
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
		putchar(i % 10 + '0');
}
