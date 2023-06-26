#include <stdlib.h>
#include <stdio.h>

/**
 * swap_int - function that swaps the value of two integers
 * @a: value of integer one
 * @b: value of integer two
 *
 * Return: Always (0) success
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
