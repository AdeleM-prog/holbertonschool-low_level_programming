#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - check the code
 * @s : string to check
 * @accept: bytes to compare
 * Return: &s[i] if match, NULL if no match
 */
char *_strpbrk(char *s, char *accept)
{
int i;
int j;
char *found = NULL;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
found = &s[i];
return (found);
}
}
}
return (found);
}
