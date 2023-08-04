#include <stdio.h>
#include "main.h"

/**
 * flip_bits -  function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: is the number you want to compare
 * @m: is the number you want to compare
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0, n_bit, n_lsb;

	while (!(n == 0 && m == 0))
	{
		n_bit = n & 1;
		n_lsb = m & 1;

		n = n >> 1;
		m = m >> 1;
		if (n_bit != n_lsb)
			flip += 1;
	}
	return (flip);
}
