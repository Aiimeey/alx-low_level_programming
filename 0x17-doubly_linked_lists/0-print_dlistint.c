#include "lists.h"
/**
 * print_dlistint - Prints the elements of a doubly-linked list of integers
 * @h: A pointer to the head of the doubly-linked list
 *
 * Return: The total number of elements printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
