#include <unistd.h>

/**
 * *_memcpy - function that copies memory area
 * @dest:pointer to the designation memory area
 * @src:pointer to the source memory
 * @n: unsigned integer
 *
 * Return: dest
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
	{
		*p++ = *src++;
	}
	return (dest);
}
