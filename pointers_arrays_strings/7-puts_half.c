#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print
 * Return: void
 */
void puts_half(char *str)
{
int n;
int length;
for (length = 0; str[length] != '\0'; length++)
{
}
if (length % 2 == 0)
{
for (n = length / 2 ; str[n] != '\0'; n++)
{
_putchar(str[n]);
}
}
else
{
n = (length + 1) / 2;
for (n = (length + 1) / 2 ; str[n] != '\0'; n++)
{
_putchar(str[n]);
}
}
}
