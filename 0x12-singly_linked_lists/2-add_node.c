#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node - Adds a new node at the beginning of a linked list
 * @head: A pointer to the head of the linked list
 * @str: The string to be stored in the new node
 *
 * Return: A pointer to the created  node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;

	temp->next = *head;

	*head = temp;

	return (*head);
}
