#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination file
 * @src: source file
 * @n: number of bytes available
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
if (i < n)
{
while (i < n)
dest[i] = '\0';
i++;
}
return (dest);
}
