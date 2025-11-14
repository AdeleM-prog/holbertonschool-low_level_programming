#include "dog.h"
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: name
 * @age : age
 * @owner: owner
 * Return: pointer to the new allocated memory
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
unsigned int i;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
new_dog->name = malloc(strlen(name) + 1);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
for (i = 0; i <= strlen(name); i++)
new_dog->name[i] = name[i];
new_dog->owner = malloc(strlen(owner) + 1);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
for (i = 0; i <= strlen(owner); i++)
new_dog->owner[i] = owner[i];
new_dog->age = age;
return (new_dog);
}
