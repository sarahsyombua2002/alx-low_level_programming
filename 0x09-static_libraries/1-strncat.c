#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncat -returns a pointer to the resulting string dest.
 * @dest: destination
 * @src: input
 * @n: number
 * Return: strncat
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
