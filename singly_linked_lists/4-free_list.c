#include "lists.h"
#include <stdlib.h>
/**
* free_list - frees a list_t list
* @head: head of the list to free
* Return: void
*/
void free_list(list_t *head)
{
list_t *h;
while (head != NULL)
{
h = head->next;
free(head->str);
free(head);
head = h;
}
}
