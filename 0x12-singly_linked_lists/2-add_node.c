#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node -  adds a new node at the beginning of a list_t list.
 * @head: is a pointer to the first node in the list.
 * @str: is a string to be added to the linked list.
 *
 * Return:the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(const char *s)
{
	int c = 0;

	while (*s)
	{
		s++;
		c++;
	}

	return (c);
}
