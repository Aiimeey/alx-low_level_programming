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
	const listint_t *p;

	if (h == NULL)
		return (0);

	p = h;
	while (p)
	{
		printf("%d\n", p->n);
		p = p->next;
		n++;
	}
	return (n);
}
