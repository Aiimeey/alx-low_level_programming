#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - Prints the elements of a linked list
 * @h: pointer to the head of the linked list
 *
 * Return: The number nodes in the linked list
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
			printf("[0] (nil)\n");

		h = h->next;
		n++;

	}
	return (n);
}
