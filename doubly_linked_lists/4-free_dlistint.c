#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of the list to free
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *h;
while (head != NULL)
{
h = head->next;
free(head);
head = h;
}
}
