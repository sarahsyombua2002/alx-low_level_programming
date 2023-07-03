#include <unistd.h>
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals
 * @a: input
 * @size: size
 *i
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagsums(int *a, int size)
{
int i, n, sum1 = 0, sum2 = 0;

for (i = 0; i <= (size * size); i = i + size + 1)
sum1 = sum1 + a[i];

for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
sum2 = sum2 + *(a + i*size + (size - i - 1));
printf("%d %d\n", sum1, sum2);
}
