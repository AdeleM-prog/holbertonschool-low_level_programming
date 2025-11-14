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
int i;
int size1;
int size2;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
for (size1 = 0; name[size1] != '\0'; size1++)
{
}
new_dog->name = malloc(size1 + 1);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
for (i = 0; i <= size1; i++)
new_dog->name[i] = name[i];
for (size2 = 0; owner[size2] != '\0'; size2++)
{
}
new_dog->owner = malloc(size2 + 1);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
for (i = 0; i <= size2; i++)
new_dog->owner[i] = owner[i];
new_dog->age = age;
return (new_dog);
}
