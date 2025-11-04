#include "main.h"
/**
 * _strstr - find a string in a string
 * @needle : string to find
 * @haystack : string to check
 * Return: pointer to the located substring, NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
int i;
int j;
if (needle[0] == '\0')
{
return (haystack);
}
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
{
break;
}
if (needle[j + 1] == '\0')
{
return (&haystack[i]);
}
}
}
return (NULL);
}
