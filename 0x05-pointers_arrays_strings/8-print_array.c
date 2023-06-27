#include <stdlib.h>
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers
 * @a: array
 * @n: number
 *
 * Return: Always (0) success
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
