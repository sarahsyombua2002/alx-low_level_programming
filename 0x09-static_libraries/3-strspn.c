#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 *  _strspn - main
 *  @s: ...
 *  @accept: ..
 *  Return: ...
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}

