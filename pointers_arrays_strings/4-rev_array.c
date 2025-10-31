#include "main.h"
/**
 * reverse_array - print an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int i = 0;
int tmp;
for (; i < n / 2 ; i++)
{
tmp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = tmp;
}
}
