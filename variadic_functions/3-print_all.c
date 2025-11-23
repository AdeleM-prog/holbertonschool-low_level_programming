#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - function that prints anything
 * @format: all type of arg passe to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
int i = 0, j, printed = 0;
va_list args;
char *str, c;
double f;
va_start(args, format);
while (format && format[i] != '\0')
{
printed = 0;
switch (format[i])
{
case 'c':
c = (char) va_arg(args, int);
printf("%c", c);
printed = 1;
break;
case 'i':
j = va_arg(args, int);
printf("%d", j);
printed = 1;
break;
case 'f':
f = va_arg(args, double);
printf("%f", f);
printed = 1;
break;
case 's':
str = va_arg(args, char*);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
printed = 1;
break;
default: break;
}
if (printed == 1 && format[i + 1] != '\0')
{
printf(", ");
}
i++;
}
va_end(args);
printf("\n");
}
