#include "main.h"
/**
 * print_chessboard - prints the chessboard
 *@a: pointer to a table of 8 chars
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
int i;
int j;
for (i = 0; i <= 7; i++)
{
for (j = 0; j <= 7; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
}
