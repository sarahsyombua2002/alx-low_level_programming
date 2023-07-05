#include <unistd.h>
#include <stdio.h>

/**
 * _pow_recursion - function that returns the value
 * @x: name of the parameter of the function
 * @y: name of the parameter of the function
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
