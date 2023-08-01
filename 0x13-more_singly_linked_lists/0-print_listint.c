#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_listint - Prints the elements of a linked list
 * @h: Pointer to the head node of the linked list
 * Return: The number of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
