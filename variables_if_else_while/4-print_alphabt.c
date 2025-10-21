#include <stdio.h>
/**
 * main -  affiche un message en sortie
 * Return: 0
 */
int main(void)
{
int i = 97;
for (; i <= 122 ; i++)
{
if (i != 101 && i != 113)
putchar(i);
}
putchar('\n');
return (0);
}
