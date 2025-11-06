#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to check
 * Return: natural square root of a number
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_helper(n, 0));
}

/**
 * _sqrt_helper - conditions of recursion
 * @n: number's square root to find
 * @i: square root to check
 * Return: _sqrt_helper(n, i + 1)
 */
int _sqrt_helper(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (_sqrt_helper(n, i + 1));
}
