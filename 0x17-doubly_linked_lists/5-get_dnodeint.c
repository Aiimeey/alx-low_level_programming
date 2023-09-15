#include "lists.h"
/**
 * get_dnodeint_at_index - Returns a pointer to the node at a specified index
 * @head: A pointer to the head of the doubly linked list
 * @index: The index of the node to retrieve
 *
 * Return: A pointer to the node at the specified index, or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i;

	for (i = 0; i < index ; i++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}
	return (temp);
}
