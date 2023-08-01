#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * pop_listint - Removes the first node of a linked list and returns its value
 * @head: A pointer to the pointer to the head node of the linked list
 *
 * Return: The integer value stored in the removed node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head || !(*head))
		return (0);

	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	temp = NULL;


	return (n);
}
