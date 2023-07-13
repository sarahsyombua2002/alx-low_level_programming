#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - function allocates memory
  * @b: the size to allocate
  *
  * Return: m
  */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);

	if (m == NULL)
		exit(98);

	return (m);
}
