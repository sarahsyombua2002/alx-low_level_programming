#include <unistd.h>
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals
 * @a: pointewr to the first element of the matrix
 * @size: size of the matrix
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0;
int sum2 = 0;

for  (i = 0; i < size; i++)
{
sum1 += *(a + i * size + i);
sum2 += *(a + i * size + (size - 1 - i));
}
printf("%d\n", sum1);
printf("%d\n", sum2);
}
