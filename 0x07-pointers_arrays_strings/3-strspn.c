#include <unistd.h>
#include <string.h>

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: the pointer of the string
 * @accept: a pointer to the string
 *
 * Return: count
 * On error, -1 is returned, and errno is set appropriately.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		count++;
		s++;
	}
	return (count);
}
