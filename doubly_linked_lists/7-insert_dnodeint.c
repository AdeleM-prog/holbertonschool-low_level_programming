#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to a pointer pointing to the list
 * @idx: index position of the nex node
 * @n: content of the node
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *ptr = *h;
unsigned int i = 0;
dlistint_t *new;

if (*h == NULL)
{
if (idx == 0)
return (add_dnodeint(h, n));
else
return (NULL);
}
if (idx == 0)
return (add_dnodeint(h, n));
while (i < idx)
{
if (ptr == NULL && i < idx)
return (NULL);
ptr = ptr->next;
i++;
}
if (ptr == NULL)
{
if (i == idx)
return (add_dnodeint_end(h, n));
else
return (NULL);
}
else
{
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->prev = ptr->prev;
new->next = ptr;
ptr->prev->next = new;
ptr->prev = new;
}
return (new);
}
