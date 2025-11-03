#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
int i;
int j;
int found = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
  if (s[i] == accept[j])
    {
      found = 1;
      break;
    }
}
 if (found == 0)
   {
     break;
   }
}
return (i);
}
