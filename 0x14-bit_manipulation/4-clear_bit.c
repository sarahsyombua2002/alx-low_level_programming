#include <stdio.h>
#include "main.h"

/**
 * clear_bit -function that sets the value of a bit to 0 at a given index
 * @n:pointer to the unsigned int variable, the number whose
 * bit value is to be set
 * @index:is unsigned int parameter, which is the position of the 
 * bit you want to set, starting from 0
 *
 * Return:1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int one;

	if (index > 63)
		return (-1);
	
	one = 1 << index;
	
	*n = *n & (~one);

	return (1);
}
