#include "main.h"

/**
 * _isalpha - checks alphabetic character
 * @c: The character is ASCII code
 * Return: 1 for lower and uppercase otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
