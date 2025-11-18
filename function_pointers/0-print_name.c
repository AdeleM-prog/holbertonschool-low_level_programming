#include "main.h"
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: name of the person
 * @f: pointer to a function
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL)
return (NULL);
if (f == NULL)
return (NULL);
(*f)(name);
}
