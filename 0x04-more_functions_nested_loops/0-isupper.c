#include <unistd.h>

/**
 * _isupper - checks for upercase character
 * @c: The character to print
 *
 * Return: On success 1 otherwise 0
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	return (0);
}
