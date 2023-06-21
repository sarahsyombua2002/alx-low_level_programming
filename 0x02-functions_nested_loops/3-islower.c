#include "main.h"


/**
 * _islower - Lowercase characters
 * @: The character to be checked
 * Returns: 1 for lowercase character or 0 for anyhing else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
