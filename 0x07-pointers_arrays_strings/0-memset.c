#include <unistd.h>

/**
 * *_memset - function that fills memory with a constant byte
 * @s: size
 * @b: buffer
 * @n: no of bytes
 *
 * Return: On success s
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	*(s + i) = b;
	return (s);
}
