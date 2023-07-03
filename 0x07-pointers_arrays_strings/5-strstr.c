#include <unistd.h>
#include <string.h>

/**
 * *_strstr - function that locates a substring
 * @haystack: a pointer to the string
 * @needle: apointer to a string
 * Return: NULL
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strstr(char *haystack, char *needle)
{
	size_t len = strlen(needle);

	while (*haystack != '\0')
	{
		if (strncmp(haystack, needle, len) == 0)
	{
		return (haystack);
	}
		haystack++;
	}
	return (NULL);
}

