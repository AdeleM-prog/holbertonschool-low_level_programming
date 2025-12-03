#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to the node to print
 * Return: nb of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t nbnodes = 0;
while (h != NULL)
{
printf("%u\n", h->n);
nbnodes++;
h = h->next;
}
return (nbnodes);
}
