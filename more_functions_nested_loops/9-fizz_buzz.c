#include <stdio.h>
/**
 * main - function that prints the numbers from 1 to 100
 *
 * Return: void
 */
int main(void)
{
int a = 1;
for (; a <= 100 ; a++)
{
if (a % 3 == 0)
{
printf("Fizz ");
}
else if (a % 5 == 0)
{
printf("Buzz ");
}
else if (a % 3 == 0 && a % 5 == 0)
{
printf("FizzBuzz ");
}
else
{
printf("%d ", a);
}
}
return (0);
}
