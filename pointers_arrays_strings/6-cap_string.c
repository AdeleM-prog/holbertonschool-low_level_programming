#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string to check
 * Return: char
 */
char *cap_string(char *s)
{
int i = 0;
char sep[] = " \t\n,;.!, ?\"(){}";
int j = 0;
if (s[i] >= 97 && s[i] <= 122)
{
s[i] = s[i] - 32;
}
for (; s[i] != '\0'; i++)
{
for (; j != '\0'; j++)
{
if (s[i] == sep[j] && s[i + 1] >= 97 && s[i + 1] <= 122)
{
s[i + 1] = s[i + 1] - 32;
}
}
}
return (i);
}
