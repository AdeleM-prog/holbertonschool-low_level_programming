#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: int to raise
 * @y: power of int
 * Return: value of function, -1 if error, 1 when y = 0
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
else
return (int_pow_recursion(x, y));
}
