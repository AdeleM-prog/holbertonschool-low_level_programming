#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - adds a node at the end
 * @head: pointer to a pointer pointing to the head
 * @n: content of the node
 * Return: address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *h = *head;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

if (*head == NULL)
{
new->n = n;
new->prev = NULL;
new->next = NULL;
*head = new;
return (new);
}

else
{
while (h->next != NULL)
{
h = h->next;
}
h->next = new;
new->n = n;
new->prev = h;
new->next = NULL;
return (new);
}
}
