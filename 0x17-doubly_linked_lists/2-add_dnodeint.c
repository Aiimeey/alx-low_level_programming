#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a doubly-linked list
 *
 * @head: A pointer to a pointer to the head of the doubly-linked list
 * @n: The integer value to be stored in the new node
 *
 * Return: A pointer to the newly created node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	if (*head)
	{
		(*head)->prev = new;
		new->next = (*head);
	}

	*head = new;
	return (*head);
}
