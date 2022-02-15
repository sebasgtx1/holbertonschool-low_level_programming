#include <stdio.h>

/**
 * print_to_98 - prints number until 98
 * @n: number
 * Return: 0 (Succes)
 */
void print_to_98(int n)
{
if (n > 98)
{
for (; n > 98; n--)
{
printf("%i, ", n);
}
}
else if (n < 98)
{
for (; n < 98; n++)
{
printf("%i, ", n);
}
}
printf("%i\n", n);
}


