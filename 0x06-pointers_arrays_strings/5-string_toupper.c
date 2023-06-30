#include <stdlib.h>
#include <stdio.h>

/**
 * *string_toupper - changes lowercase letter of a string to uppercase
 * @s: string
 *
 * Return: s
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = (int)s[i] - 32;
	}
	return (s);
}
