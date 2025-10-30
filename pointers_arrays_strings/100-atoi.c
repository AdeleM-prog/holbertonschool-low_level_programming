#include "main.h"
/**
 * _atoi - that convert a string to an integer
 * @s: string to check
 * Return: 0 if no number, the number if found
 */
int _atoi(char *s)
{
int i;
int sign = 1;
int nb = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-')
{
sign = sign * -1;
}
if (s[i] >= 48 && s[i] <= 57)
{
nb = nb * 10 + (s[i] - '0');
if (s[i + 1] < 48 || s[i + 1] > 57)
{
break;
}
}
}
if (nb == 0)
{
return (0);
}
return (sign *nb);
}
