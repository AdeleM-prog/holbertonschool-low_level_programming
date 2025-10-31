#include "main.h"
/**
 * _strcmp - compare strings
 * @s1: string 1 to compra
 * @s2: string 2 to compare
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
for (; s1[i] != '\0' && s2[i] != '\0' ; i++)
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
}
if (s1[i] == s2[i])
{
return (0);
}
return (0);
}
