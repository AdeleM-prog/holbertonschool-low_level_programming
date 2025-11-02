#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: string to change
 * Return: char
 */
char *leet(char *s)
{
int i;
char letters[] = "aAeEoOtTlL";
char numbers[] = "4433007711";
int j;
for (i = 0; s[i] != '\0' ; i++)
{
for (j = 0; letters[j] != '\0' ; j++)
{
if (s[i] == letters[j])
{
s[i] = numbers[j];
break;
}
}
}
return (s);
}
