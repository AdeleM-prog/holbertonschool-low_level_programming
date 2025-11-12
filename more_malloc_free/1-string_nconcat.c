#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: 1st tring
 * @s2: string to allocate and concatenate
 * @n: size of s2
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int size;
unsigned int len1;
unsigned int len2;
unsigned int i;
unsigned int j = 0;
char *s1s2;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (len1 = 0; s1[len1] != '\0'; len1++)
{
}
for (len2 = 0; s2[len2] != '\0'; len2++)
{
}
if (n < len2)
size = len1 + n;
else
size = len1 + len2;
s1s2 = malloc((size + 1) * sizeof(char));
if (s1s2 == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
{
s1s2[i] = s1[i];
}
while (j < n && s2[j] != '\0')
{
s1s2[i] = s2[j];
i++;
j++;
}
s1s2[i] = '\0';
return (s1s2);
}
