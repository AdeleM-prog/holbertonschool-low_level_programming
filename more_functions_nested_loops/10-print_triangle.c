#include "main.h"
/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
int lignes;
int esp;
int hash;
if (size > 0)
{
for (lignes = 1; lignes <= size; lignes++)
{
for (esp = 0; esp < size - lignes; esp++)
{
_putchar(' ');
}
for (hash = 0; hash < lignes; hash++)
{
_putchar('#');
}
_putchar('\n');
}
}
if (size <= 0)
{
_putchar('\n');
}
}
