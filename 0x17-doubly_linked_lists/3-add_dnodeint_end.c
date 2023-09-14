#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node to the end of a doubly linked list
 * @head: A pointer to a pointer to the head of the list
 * @n: The integer value to be stored in the new node
 *
 * Return: A pointer to the head of the updated list, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;

		temp->next = new;
		new->prev = temp;
	}

	return (*head);
}
