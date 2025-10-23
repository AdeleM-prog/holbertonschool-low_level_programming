#include "main.h"
#include <ctype.h>
/**
 * print_sign - prints sign of a number
 * @n: number to check
 * Return: 1 if n greater than 0, return 0 if equal 0,
 * return -1 if less than zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
