#include "stdio.h"

/**
 * print_times_table - Prints the n times table
 *
 * @n: number times table (0 < n <= 15)
 *
 * Return: nothing
 */
void print_times_table(int n)
{
int a, b, m;
if (n >= 0 && n <= 15)
{
for (a = 0; a <= n; a++)
{
putchar(48);
for (b = 1; b <= n; b++)
{
m = a * b;
putchar(44);
putchar(32);
if (m <= 9)
{
putchar(32);
putchar(32);
putchar(m + 48);
}
else if (m <= 99)
{
putchar(32);
putchar((m / 10) + 48);
putchar((m % 10) + 48);
}
else
{
putchar(((m / 100) % 10) + 48);
putchar(((m / 10) % 10) + 48);
putchar((m % 10) + 48);
}
}
putchar('\n');
}
}
}
