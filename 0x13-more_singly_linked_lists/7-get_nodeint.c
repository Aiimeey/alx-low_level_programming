#include "lists.h"
/**
 * get_nodeint_at_index - Returns the node at a given index in a linked list
 * @head: Pointer to the head node of the linked list
 * @index: Index of the node to be retrieved
 *
 * Return: a pointer to the node at the specified index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	temp = head;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		if (temp == NULL)
			return (NULL);

		temp = temp->next;
	}
	return (temp);
}
