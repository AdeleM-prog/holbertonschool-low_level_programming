#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: the lowest value
 * @max: the highest value
 *
 * Return: the pointer to a newly created array
 */
int *array_range(int min, int max)
{
int size = max - min + 1;
int *ptr;
int i;
if (min > max)
return (NULL);
ptr = malloc(size * sizeof(int));
if (ptr == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
ptr[i] = min + i;
}
return (ptr);
}
