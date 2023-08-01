#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * listint_len - Counts the number of elements in a linked list
 * @h: Pointer to the head node of the linked list
 *
 * Return: The number of nodes in the linked list
 */
size_t listint_len(const listint_t *h)
{

	size_t n = 0;

	while (h)
	{

		h = h->next;
		n++;
	}
	return (n);
}
