#include "main.h"
/**
 * rev_string - Write a function that reverses a string.
 * @s: string to reverse
 * Return: void
 **/
void rev_string(char *s)
{
char temp;
int i = 0;
int length = 0;
if (s != NULL)
{
for (; s[length] != '\0'; length++)
{
}
for (i = 0; i < length/2  ; i++)
{
temp = s[i];
s[i] = s[length - 1 - i];
s[length - 1 - i] = temp;
}
}
}
