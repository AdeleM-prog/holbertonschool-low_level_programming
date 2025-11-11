#include "main.h"
#include <stdlib.h>
/**
 * str_concat - check the code
 *@s1 : string 1
 * @s2: string to concatenate
 * Return: pointer to the new allocated memory
 */
char *str_concat(char *s1, char *s2)
{
int i = 0;
int j = 0;
int len1;
int len2;
char *s1s2;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (len1 = 0; s1[len1] != '\0'; len1++)
{
}
for (len2 = 0; s2[len2] != '\0'; len2++)
{
}
s1s2 = malloc((len1 + (len2 + 1)) * sizeof(char));
if (s1s2 == NULL)
{
return (NULL);
}
for (; s1[i] != '\0'; i++)
{
s1s2[i] = s1[i];
}
while (s2[j] != '\0')
{
s1s2[i] = s2[j];
i++;
j++;
}
s1s2[i] = '\0';
return (s1s2);
}
