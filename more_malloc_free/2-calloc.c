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
  int *array;
  int i;
  int j;
  if (nmemb == 0 || size == 0)
    return (NULL);
  array = malloc(nmemb * size);
  if (array == NULL)
    return (NULL);
  for (i = 0; i < size ; i++)
    {
  for (j = 0; j <= nmemb; j++)
    {
      array[i][j] = 0;
    }
    }
  return (array);
}
