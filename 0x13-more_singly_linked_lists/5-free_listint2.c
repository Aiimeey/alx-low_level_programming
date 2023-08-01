#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - Frees a linked list of integers and sets the head to NULL
 *
 * @head: pointer to the pointer to the head node of the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head || !(head))
		return;
	temp = *head;

	while (*head)
	{

		temp = temp->next;

		free(*head);
		*head = temp;
	}
}
