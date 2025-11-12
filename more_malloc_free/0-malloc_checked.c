#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 *@b: size to allocate
 * Return: void *
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr != NULL)
return (ptr);
else
exit(98);
}
