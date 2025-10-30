#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: int in the array
 * @n: number of elements in the array
 * Return: void
 */
void print_array(int *a, int n)
{
int i;
for (i = 0 ; i < n ; i++)
if (i < n - 1)
printf("%d, ", a[i]);
else
printf("%d", a[i]);
printf("\n");
}
