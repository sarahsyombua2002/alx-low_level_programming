#include <unistd.h>
#include <stdio.h>

/**
 * print_chessboard - function that prints the chessboard
 * @a: pointer
 *
 *
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		printf("%c ", a[i][j]);
		printf("\n");
	}
}
