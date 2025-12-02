#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * add_node - create a new node
 * @head: first node
 * @str: string to duplicate
 * Return: adress of the new node or NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
int i = 0;
int stlen = 0;
new = malloc(sizeof(list_t));
if (new == NULL)
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
new->next = *head;
*head = new;
return (new);
}
