#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks if a character is lowercase
 * @c: character to check
 * Return: 1 if c is lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
  if (c >= 65 && c <= 122 && !(c >= 91 && c<=96))
return (1);
else
return (0);
}
