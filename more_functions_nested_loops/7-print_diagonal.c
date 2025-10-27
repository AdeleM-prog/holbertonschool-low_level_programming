#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
for (; n > 0 ; n++)
{
_putchar(" ");
}
_putchar("\\");
_putchar('\n');
}
