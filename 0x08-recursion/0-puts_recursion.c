#include <unistd.h>
#include <stdio.h>

/**
 * _puts_recursion - function that prints a string
 * @s: a pointer to char
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
