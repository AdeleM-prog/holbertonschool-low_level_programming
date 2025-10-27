#include <ctype.h>
/**
 * _isdigit - function that checks for uppercase character.
 * @c: variable to check
 * Return: 1 if digit, otherwise 0
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
