#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */

void free_listp2(listp_t **head)

{
	listp_t *temp;
	listp_t *pre;

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
