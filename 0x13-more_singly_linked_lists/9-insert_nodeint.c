#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - Insert a node at a given position in a linked list
 * @head: Double pointer to the head node of the list
 * @idx: The index where the new node should be inserted
 * @n: The value to be stored in the new node
 *
 * Return: Address of the added node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *ptr;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
	{
		ptr = malloc(sizeof(listint_t));
		if (ptr == NULL)
			return (NULL);

		ptr->n = n;
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}

	temp = *head;

	for (i = 1; i < idx && temp != NULL; i++)
	{
		temp = temp->next;
	}

	if (temp == NULL)
		return (NULL);

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	ptr->next = temp->next;
	temp->next = ptr;

	return (ptr);
}

