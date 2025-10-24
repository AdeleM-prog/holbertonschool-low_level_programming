#include "main.h"
/**
 * jack_bauer -  prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 * Return: void
 */
void jack_bauer(void)
{
char i;
char j;
char k;
char l;
for (l = '0'; l <= '2'; l++)
{
for (k = '0'; k <= '9'; k++)
{
if (l == '2' && k > '3')
{
break;
}
for (j = '0'; j <= '5'; j++)
{
for (i = '0'; i <= '9'; i++)
{
_putchar(l);
_putchar(k);
_putchar(':');
_putchar(j);
_putchar(i);
_putchar('\n');
}
}
}
}
}
