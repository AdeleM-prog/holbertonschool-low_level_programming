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
if (*head == NULL)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->prev = *head;
new->next = NULL;
while (h->next != NULL)
{
h = h->next;
}
h->next = new;
return (new);
}
