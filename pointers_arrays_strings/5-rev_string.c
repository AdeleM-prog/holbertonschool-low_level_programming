#include "main.h"
/**
 * rev_string - Write a function that reverses a string.
 * @s: string to reverse
 * Return: void
 **/
void rev_string(char *s)
{
int temp;
int i;
int length = 0;
for (i = 0; i < length/2  ; i++)
{
temp = s[i];
s[i] = s[length - 1 - i];
s[length - 1 - i] = temp;
}
}
