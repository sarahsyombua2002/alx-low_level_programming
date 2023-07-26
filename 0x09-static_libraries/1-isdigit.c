#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _isdigit - checks for a digit (0 through 9).
 * * @c: The character to print
 * Return: On success 1 otherwise 0
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isdigit(int c)
{
	return (isdigit(c));
}
