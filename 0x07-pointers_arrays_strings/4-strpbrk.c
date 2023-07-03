#include <unistd.h>
#include <string.h>

/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: a pointer to a string
 * @accept: searches for the first occurrence in s
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (strchr(accept, *s) != NULL)
	{
		return (s);
	}
		s++;
	}
		return (NULL);
}
