#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
  * op_add - Function does sum
  * @a: parameter a
  * @b: parameter b
  *
  * Return: the sum
  */

int op_add(int a, int b)

{
	return (a + b);
}

/**
  * op_sub - a function does the difference
  * @a: parameter a
  * @b: parameter b
  *
  * Return: the diffrence
  */

int op_sub(int a, int b)

{
	return (a - b);
}

/**
  * op_mul - a function multiplies two numbers
  * @a: parameter a
  * @b: parameter b
  *
  * Return: the product
  */

int op_mul(int a, int b)

{
	return (a * b);
}

/**
  * op_div - a function that does division
  * @a: parameter a
  * @b: parameter b
  *
  * Return: the division result
  */

int op_div(int a, int b)

{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
  * op_mod - a fuction that does modulus
  * @a: parameter a
  * @b: parameter b
  *
  * Return: the remaining division
  */

int op_mod(int a, int b)

{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
