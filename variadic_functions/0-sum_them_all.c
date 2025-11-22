#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns a sum of its parameters
 * @n: const variable
 * Return: result of the sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i;
int sum = 0;
va_start(args, n);
for (i = 0; i < n ; i++)
{
int vallue = va_arg(args, int);
sum = sum + value;
}
va_end(args);
return (sum);
}
