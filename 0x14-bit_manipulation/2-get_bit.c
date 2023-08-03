#include <stdio.h>
#include "main.h"

/**
 * get_bit -returns the value of a bit at a given index
 * @n: the number of bit to get
 * @index: unsigned int parameter of a function
 * Return: value  the bit at index or
 * -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (index == 0)
	{
		return (n & 1);
	}
	return (get_bit(n >> 1, index - 1));
}
