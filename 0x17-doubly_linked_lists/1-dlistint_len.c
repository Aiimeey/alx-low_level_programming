#include "lists.h"
/**
 * dlistint_len - Computes the length of a doubly-linked list
 *
 * @h: A pointer to the head of the doubly-linked list
 *
 * Return: The number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
