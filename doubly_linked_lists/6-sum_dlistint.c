#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * sum_dlistint - returns the sum of all data of a list
 * @head: head of the list
 * Return: sum of all data of a list
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *h = head;
if (head == NULL)
return (0);
else
{
while (h != NULL)
{
sum = sum + h->n;
h = h->next;
}
}
return (sum);
}
