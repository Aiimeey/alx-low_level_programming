#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - Adds a new node at the end of a linked list
 * @head: Pointer to the pointer to the head node of the linked list
 * @n: The integer value to be stored in the new node
 *
 * Return: A pointer to the new tail of the list
 *         If memory allocation fails returns NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *temp, *ptr;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;

	else
	{
		ptr = *head;
		while (ptr->next)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	return (temp);
}

