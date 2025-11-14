#include "dog.h"
#include "main.h"
#include <stdlib.h>
/**
 * free_dog - function that frees the dogs
 * @d: pointer to the structure
 * Return: void
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return (NULL);
else
{
free(d->name);
free(d->owner);
free(d);
}
}
