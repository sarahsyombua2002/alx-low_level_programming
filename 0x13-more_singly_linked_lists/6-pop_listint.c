#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */

int pop_listint(listint_t **head)
{
	int head_node;
	listint_t *h;
	listint_t *pre;

	if (*head == NULL)
		return (0);

	pre = *head;
	head_node = pre->n;
	h = pre->next;
	free(pre);
	*head = h;

	return (head_node);
}
