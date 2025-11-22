#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @n: number of int passed to the function
 * @separator: the string to be printed between nb
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
int numbers;
va_start(args, n);
for (i = 0; i < n ; i++)
{
numbers = va_arg(args, int);
printf("%d", numbers);
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(args);
}
