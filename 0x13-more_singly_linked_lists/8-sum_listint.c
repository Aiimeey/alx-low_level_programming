#include "lists.h"
/**
 * sum_listint - Computes the sum of all elements in a linked list
 * @head: Pointer to the head node of the list
 *
 * Return: The sum of all the elements in the linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
