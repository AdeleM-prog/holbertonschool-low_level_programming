#include "main.h"
#include <ctype.h>
/**
 * print_last_digit - prints last digit of a number
 * @n: number to check
 * Return: the last digit
 */
int print_last_digit(int n)
{
int m = n % 10;
if (m < 0)
{
m = -m;
}
_putchar(m + '0');
return (m);
}
