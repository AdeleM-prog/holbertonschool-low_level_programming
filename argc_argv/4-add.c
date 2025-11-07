#include <stdio.h>
/**
 * main - adds positive number
 * @argc: argument count
 * @argv: string to print
 * Return: 0.
 */
int main(int argc, char *argv[])
{
int i = 1;
int j;
int k;
int sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (; i < argc; i++)
{
for (k = 0; argv[i][k] != '\0'; k++)
{
if (argv[i][k] < '0' || argv[i][k] > '9')
{
printf("Error\n");
return (1);
}
}
}
i = 1;
while (i < argc)
{
j = atoi(argv[i]);
sum = sum + j;
i++;
}
printf("%d\n", sum);
return (0);
}
