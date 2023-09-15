#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a specified index in a
 *                              doubly linked list
 * @h: A pointer to a pointer to the head of the doubly linked list
 * @idx: The index at which to insert the new node
 * @n: The integer value to be stored in the new node
 *
 * Return: A pointer to the newly inserted node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *temp = *h, *ptr;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new); }
	for (i = 1; i < idx ; i++)
	{
		if (temp == NULL)
		{
			free(new);
			return (NULL); }
		temp = temp->next;
	}
	ptr = temp->next;
	if (!ptr)
	{	temp->next = new;
		new->prev = temp;
		new->next = NULL;
	}
	else
	{	new->prev = temp;
		temp->next = new;
		ptr->prev = new;
		new->next = ptr;
	}
	return (new);
}
