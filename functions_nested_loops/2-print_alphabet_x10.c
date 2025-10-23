#include <unistd.h>
#include "main.h"
/**
* print_alphabet_x10 - prints alphabet x10 followed by a new line
* Description: _putchar is used to print alphabet
* Return: (void)
*/
void print_alphabet_x10(void)
{
char alpha[] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 10; i++)
{
write(1, alpha, 27);
}
}
