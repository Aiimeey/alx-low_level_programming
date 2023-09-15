#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *temp = head;
    unsigned int i;

    for (i = 0; i < index ; i++)
    {
        if (temp == NULL)
            return NULL;
        temp = temp->next;
    }
    return(temp);
}