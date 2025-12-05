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
unsigned int i = 0;
dlistint_t *h = *head;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = h->next;
if (*head != NULL)
(*head)->prev = NULL;
free(h);
return (1);
}
while (i < index && h != NULL)
{
h = h->next;
i++;
}
if (h == NULL)
return (-1);
if (i != index)
return (-1);
if (h->next == NULL)
{
if (h->prev != NULL)
{
h->prev->next = NULL;
free(h);
return (1);
}
if (h->prev == NULL)
{
*head = NULL;
free(h);
return (1);
}
else
{
h->prev->next = h->next;
h->next->prev = h->prev;
free(h);
return (1);
}
}
return (-1);
}
