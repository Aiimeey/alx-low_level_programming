#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - Adds a new node at the beginning of a linked list
 * @head: Pointer to the pointer to the head node of the linked list.
 * @n: The integer value to be stored in the new node
 *
 * Return: A pointer to he new head of the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *temp = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (*head);
}
