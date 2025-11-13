#include "main.h"
#include <stdlib.h>
/**
* _calloc - allocates memory for an array, using malloc
* @nmemb: nb of elements in the array
* @size: the size of the memory to print
*
* Return: Nothing.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *array;
unsigned int i;
unsigned int total;
char *p;
if (nmemb == 0 || size == 0)
return (NULL);
array = malloc(nmemb * size);
if (array == NULL)
return (NULL);
total = nmemb * size;
p = (char *)array;
for (i = 0; i < total ; i++)
{
p[i] = 0;
}
return (array);
}
