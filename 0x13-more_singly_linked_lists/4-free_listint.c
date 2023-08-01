#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - Frees a linked list of integers
 * @head: A pointer to the head node of the linked list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;

	while (head)
	{

		temp = temp->next;

		free(head);
		head = temp;
	}
}
