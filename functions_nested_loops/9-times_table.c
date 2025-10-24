#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
int a = 0;
int b = 0;
int x = 0;
for (a = 0; a < 10 ; a++)
{
for (b = 0; b < 10 ; b++)
{
x = a * b;
if (b != 0)
{
_putchar(',');
_putchar(' ');
}
if (x < 10)
{
_putchar(' ');
}
if (x < 10)
{
_putchar('0' + x);
}
else
{
_putchar('0' + (x / 10));
_putchar('0' + (x % 10));
}
}
_putchar('\n');
}
}
