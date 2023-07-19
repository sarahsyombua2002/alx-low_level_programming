#include "function_pointers.h"
#include <stddef.h>

/**
  * print_name - Function that prints a name
  * @name:Name to be printed
  * @f: Pointer
  *
  * Return: Nothing
  */

void print_name(char *name, void (*f)(char *))

{
	if (name != NULL && f != NULL)
		f(name);
}

