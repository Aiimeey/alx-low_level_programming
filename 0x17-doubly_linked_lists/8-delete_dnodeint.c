#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a specified index in
 * a doubly linked list
 * @head: A pointer to a pointer to the head of the doubly linked list
 * @index: The index of the node to delete
 *
 * Return: 1 if the deletion is successful, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *ptr;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
	}
	else
	{
		for (i = 0; i < index - 1; i++)
		{
			if (temp == NULL || temp->next == NULL)
				return (-1);
			temp = temp->next;
		}

		ptr = temp->next->next;
		free(temp->next);
		temp->next = ptr;
		if (ptr)
			ptr->prev = temp;
	}

	return (1);
}
