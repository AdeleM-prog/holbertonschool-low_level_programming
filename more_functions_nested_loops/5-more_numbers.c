#include "main.h"
/**
 * more_numbers - function that prints the numbers,
 * from 0 to 14, followed by a new line.
 *
 * Return: void
 */
void more_numbers(void)
{
int i = 0;
int j;
for (; i <= 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
{
_putchar('0' + j % 100);
}
_putchar('0' + j % 10);
}
_putchar('\n');
}
}
