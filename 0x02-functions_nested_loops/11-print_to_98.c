#include <stdio.h>

/**
 * print_to_98 - prints number until 98
 * @a: number
 * Return: 0 (Succes)
 */
int print_to_98(int a)
{
int i;

if (a > 98)
{
for (i = a; i <= 98; i--)
{
printf("%i, ", i);
}
}
else
{
for (i = a; i <= 98; i++)
{
printf("%i, ", i);
}
}
return (0);
}
