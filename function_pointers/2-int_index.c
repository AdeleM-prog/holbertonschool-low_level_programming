#include "main.h"
#include <stdlib.h>
/**
 * int_index - searches an integer
 * @array: array to check
 * @size: size of the array
 * @cmp: function comparing the elements of the array
 * Return: -1 if false, i if success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
return (-1);
if (array == NULL)
return (-1);
if (cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
