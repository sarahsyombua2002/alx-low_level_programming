#include "main.h"
#include <unistd.h>
#include <stdio.h>

int _sqrt_helper(int n, int i);
int _sqrt_recursion(int n);

/**
 * _sqrt_helper - a helper function 
 * @y: the number we are testing
 * @n: the square we want to find
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

/**
 *  _sqrt_recursion -  function that returns the natural square root of a number.
 * @n: parameter of function
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_helper(int n, int i);

int _sqrt_recursion(int n)
{
        if (n < 0)
                return (-1);
        return (_sqrt_helper(0, n));
}

int _sqrt_helper(int y, int n)
{
	if (y * y == n)
		return (x);
	if (y * y > n)
	return (-1);
	return (_sqrt_helper(y + 1, n));
}
