#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * add_node_end - adds a node at the end of the list
 * @head: pointer to a pointer the the head of the list
 * @str: string to duplicate
 * Return:address of the new element, NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *h = *head;
int i = 0;
unsigned int stlen = 0;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
if (str == NULL)
return (NULL);
new->str = strdup(str);
if (new->str == NULL)
return (NULL);
while (str[i] != '\0')
{
stlen++;
i++;
}
new->len = stlen;
new->next = NULL;
if (*head == NULL)
{
*head = new;
}
else
{
while (h->next != NULL)
{
h = h->next;
}
h->next = new;
}
return (new);
}
