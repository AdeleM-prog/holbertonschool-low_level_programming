#include <stdio.h>
/**
 * main -  affiche un message en sortie
 * Return: 0
 */
int main(void)
{
int i = 48;
for (; i <= 57 ; i++)
{
putchar(i);
if (i < 57)
{
putchar(',');
}
}
return (0);
}
