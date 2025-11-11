#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated memory
 * which contains a string given as parameter
 * @str: string to copy
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
int i = 0;
int len;
char *str2;
if (str == NULL)
return (NULL);
for (len = 0; str[len] != '\0'; len++)
{
}
str2 = malloc((len + 1) * sizeof(char));
if (str2 == NULL)
return (NULL);
for (; str[i] != '\0'; i++)
{
str2[i] = str[i];
}
if (str[i] == '\0')
{
str2[i] = '\0';
}
return (str2);
}
