#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
  * create_array - function that creates an array of chars
  * @size: The size
  * @c: The char
  *
  * Return: s if success
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
