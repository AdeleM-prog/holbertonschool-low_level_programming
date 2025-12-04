#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - deletes a node at index
 * @head: pointer to a pointer pointing to the 1st node of the list
 * @index: spot where node to delete is
 * Return: -1 if fail, 1 if succeed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i;
dlistint_t *h = *head;
if (head == NULL)
return (-1);
while (i < index)
{
h = h->next;
i++;
}
if (h->next == NULL && i < index)
return (-1);
if (i == index)
{
free(h);
}
return (1);
}
