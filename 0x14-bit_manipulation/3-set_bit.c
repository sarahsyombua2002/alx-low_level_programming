#include <stdio.h>
#include "main.h"

/**
 * set_bit -function that sets the value of a bit to 1 at a given index.
 * @n: is a pointer to an unsigned long int variable
 * @index:unsigned int parameter, which is the position of the bit
 * you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int one;

	if (index > 63)
		return (-1);

	one = 1 << index;

	*n = *n | one;

	return (1);
}
