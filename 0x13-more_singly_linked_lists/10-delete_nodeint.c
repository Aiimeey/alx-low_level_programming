#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - Deletes the node in a linked list
 * @head: Double pointer to the head node of the list
 * @index: The index of the node to be deleted
 *
 * Return: 1 if the deletion is successful, -1 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *ptr;


	temp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 1; i < index; i++)
	{
		temp = temp->next;
	}

	if (temp->next->next == NULL)
	{
		free(temp->next);
		return (1);
	}
	ptr = temp->next->next;
	free(temp->next);
	temp->next = ptr;

	return (1);
}
