#include <stdlib.h>
#include <stdio.h>

/**
 * reverse_array - function that reverses the content of an array of integer
 * @a: pointer to the 1st element of array of integer that needs to be reversed
 * @n: number of elements in an array.
 *
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;

	while (i < j)

	{
		int temp = a[i];

		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
