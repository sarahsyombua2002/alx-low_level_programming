#include "main.h"

/**
 * _abs - computation of absolute value of an integer
 * @c: input number as an integer
 * Return: absolute value
 */


int _abs(int c)
{
	if (c < '0')
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
		return (c);
}
