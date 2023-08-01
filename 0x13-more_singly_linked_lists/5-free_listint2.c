#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: The function sets the head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *pre;

	if (head != NULL)
	{
		pre = *head;
		while ((temp = pre) != NULL)
		{
			pre = pre->next;
			free(temp);
		}
		*head = NULL;
	}
}
