#include "lists.h"
#include <stddef.h>
/**
 * list_len - counts elements of a linked list
 * @h: pointer to the nodes to count
 * Return: number of elements of the list
 */
size_t list_len(const list_t *h)
{
size_t nbnodes = 0;
while (h != NULL)
{
nbnodes++;
h = h->next;
}
return (nbnodes);
}
