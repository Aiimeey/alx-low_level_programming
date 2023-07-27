#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - Adds a new node at the end of a linked list
 * @head: A pointer to the head of the linked list
 * @str: The string to be stored in the new node
 *
 * Return: A pointer to the new node
 *         If memory allocation fails returns NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *ptr;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		ptr = *head;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = temp;
	}
	return (temp);
}
