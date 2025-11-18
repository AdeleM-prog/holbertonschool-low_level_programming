#include "main.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function given as parameter
 * @size: size of the array
 * @action: pointer to the function
 * @array: array to treat
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (size == 0)
return;
if (array == NULL)
return;
if (action == NULL)
return;
for (i = 0; i < size; i++)
{
(*action)(array[i]);
}
}
