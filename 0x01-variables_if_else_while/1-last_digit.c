#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit stored in varible n
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	if (n > 5)
	{
		printf("last digit of %d is %d and is greator than 5\n", n, n % 10);
	}
	else if (n < 6)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	else
	{
		printf("last digit of %d is %d and is 0\n", n, n % 10);
	}
	return (0);
}
