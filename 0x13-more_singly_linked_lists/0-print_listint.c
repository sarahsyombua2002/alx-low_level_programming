#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements
 * @h: head of lists
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t counts = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counts++;
	}
	return (counts);
}
