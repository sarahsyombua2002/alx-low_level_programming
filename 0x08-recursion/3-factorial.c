#include <unistd.h>
#include <stdio.h>

/**
 * factorial - function that prints a string
 * @n: the name of the parameter of the function factorial
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
