#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv: string to print
 * Return: 0.
 */
int main(int argc, char *argv[])
{
int nb1;
int nb2;
int x;
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
nb1 = atoi(argv[1]);
nb2 = atoi(argv[2]);
x = nb1 *nb2;
printf("%d\n", x);
return (0);
}
