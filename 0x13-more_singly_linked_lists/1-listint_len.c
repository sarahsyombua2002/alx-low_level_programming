#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Returns the no. of elements in a linked list.
 * @h: head of a list.
 *
 * Return: numbers of nodes
 */

size_t listint_len(const listint_t *h)

{
	size_t counts = 0;

	while (h != NULL)
	{
		h = h->next;
		counts++;
	}
	return (counts);
}
