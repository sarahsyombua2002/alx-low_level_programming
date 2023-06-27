#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * rev_string - Function that reverses a string
 * @s: reverse string
 *
 * Return: Always (0) success
 */

void rev_string(char *s)

{
	int i = 0;

	int j = strlen(s) - 1;
	char temp;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
