#include "lists.h"
#include <stdlib.h>
/**
 * free_list - Frees a linked list
 *
 * @head: A pointer to the head of the linked list
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head)
	{
		temp = temp->next;

		free(head->str);
		free(head);

		head = temp;
	}


}
