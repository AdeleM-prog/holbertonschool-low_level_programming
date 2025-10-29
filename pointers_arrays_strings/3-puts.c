#include "main.h"
/**
 * _puts - prints a string
 * @str: string to print
 * Return: void
 */
void _puts(char *str)
{
int i = 0;
for (; str[i] != '\0' ; i++)
{
_putchar(str[i]);
}
 _putchar('\n');
}
