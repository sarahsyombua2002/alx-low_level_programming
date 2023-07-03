#include <unistd.h>

/**
 * *_strchr - function that locates a character in a string
 * @c: a character
 * @s: a pointer to the string
 *
 * Return: NULL
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strchr(char *s, char c)

{
	while (*s != '\0')
	{
		if (*s == c)
	{
		return (s);
	}
		s++;
	}
		if (*s == c)
	{
		return (s);
	}
		return (NULL);
}
