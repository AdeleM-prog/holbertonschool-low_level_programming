#include "lists.h"
#include <stdlib.h>
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to the checked element
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t nbnodes = 0;

while (h != NULL)
{
nbnodes++;
h = h->next;
}
return (nbnodes);
}
