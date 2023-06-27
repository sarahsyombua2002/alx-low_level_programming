#include <stdio.h>
#include <string.h>

/**
 * *_strcpy - copies the string pointed
 * @dest: char type string
 * @src: char type string
 * Return: Always (0) success
 */

char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');
	return (dest);
}
