#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
  * main - check the code
  * @argc: number of arguments
  * @argv: number of arguments
  * 
  * Return: 0 on success, 98, 99 or 100 on error
  */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2][0];
	
	if (op != '+' && op != '-' && op != '*' && op != '/' && op != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if ((op == '/' || op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	switch (op)
	{
		 case '+':
	     result = num1 + num2;
	     break;
		case '-':
	result = num1 - num2;
	break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        case '%':
            result = num1 % num2;
            break;
        default:
            result = 0;
	}
	printf("%d\n", result);
	return (0);
}
