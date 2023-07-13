#include "main.h"
#include <stdio.h>

/**
  * main - Prints the number of arguments wihout the name of the program
  * @argc: argument number
  * @argv: argument array
  *
  * Return: Always 0 success
  */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
