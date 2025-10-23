#include "main.h"
#include <ctype.h>
/**
 * _islower - checks if a character is lowercase
 * @c: character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
  if (c >= 65 && c <= 122 && !(c >= 91 && c<=96))
return (1);
else
return (0);
}
