#include "main.h"
/**
 * _strchr - locates a character in a string
 * @c: character to find
 * @s: string to check
 * Return: c if character found, NULL if not
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0' ; i++)
{
if (s[i] == c)
{
return (&s[i]);
}
}
if (c == '\0')
{
return (&s[i]);
}
return (NULL);
}
