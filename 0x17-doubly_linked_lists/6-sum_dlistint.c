#include "lists.h"
/**
 * sum_dlistint - Calculates sum of all integer values in a doubly linked list
 * @head: A pointer to the head of the doubly linked list
 *
 * Return: The sum of all integer values in the list, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
