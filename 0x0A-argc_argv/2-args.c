#include "main.h"
#include <stdio.h>

/**
  * main - Prints all the argument it receives
  * @argc: argument
  * @argv: argument
  *
  * Return: Always 0 success
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
