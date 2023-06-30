#include <stdlib.h>
#include <stdio.h>

/**
 * *_strncat - function that concentrates two strings
 * @dest: string
 * @src: string
 * @n: integer
 * Return: Always (0) success
 */

char *_strncat(char *dest, char *src, int n)

{
	int i = 0;
	int j = 0;
	
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
