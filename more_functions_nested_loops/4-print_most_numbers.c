#include "main.h"
/**
 * print_most_numbers - function that prints the numbers,
 * from 0 to 9, followed by a new line.
 *
 * Return: void
 */
void print_most_numbers(void)
{
int i = 48;
for (; i <= 57; i++)
{
if (i != 50 && i != 52)
{
_putchar(i);
}
}
_putchar('\n');
}
