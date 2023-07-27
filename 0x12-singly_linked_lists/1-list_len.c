#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * list_len - Prints the number of elements of a linked list
 * @h: pointer to the head of the linked list
 *
 * Return: The number nodes in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;

	}
	return (n);
}
