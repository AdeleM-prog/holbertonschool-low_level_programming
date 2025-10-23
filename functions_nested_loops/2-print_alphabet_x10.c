#include <unistd.h>
#include "main.h"
/**
* print_alphabet_x10 - prints alphabet x10 followed by a new line
* Description: _putchar is used to print alphabet
* Return: (void)
*/
void print_alphabet_x10(void)
{
int compteur = 0;
char c;
for (; compteur < 10; compteur++)
{
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
}
}
