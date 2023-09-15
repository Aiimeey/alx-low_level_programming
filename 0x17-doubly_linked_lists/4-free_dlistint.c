#include "lists.h"
/**
 * free_dlistint - Frees a doubly linked list
 *
 * @head: A pointer to the head of the list to be freed
 */
void free_dlistint(dlistint_t *head)
{
	while (head->next)
	{
		head = head->next;
		free(head->prev);
		head->prev = NULL;
	}
	free(head);

}
