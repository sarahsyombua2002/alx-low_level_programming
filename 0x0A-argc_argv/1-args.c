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
int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
