#include <unistd.h>
#include <stdio.h>

/**
 * _print_rev_recursion - function that prints a string
 * @s: a pointer to char
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
