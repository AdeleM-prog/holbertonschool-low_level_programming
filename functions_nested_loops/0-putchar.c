#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: This function prints _putchar, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
const char *text = "_putchar\n";
write(1, text, 9);
return (0);
}
