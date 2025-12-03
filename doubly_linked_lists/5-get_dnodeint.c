#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * get_dnodeint_at_index - returns the Nth node of a dlistint_t linked list
 * @head: 1st node of the list
 * @index: index of the node
 * Return: the Nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *h = head;
while (h != NULL)
{
if (i == index)
return (h);
else
{
h = h->next;
i++;
}
}
return (NULL);
}
