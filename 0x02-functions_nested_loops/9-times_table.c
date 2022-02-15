#include <stdio.h>
/**
 * times_table - Prints a times table
 *
 * Return: Always 0 (Success)
 */
int times_table(void)

{

int m, a, b;

for (a = 0; a <= 9; a++)
{

for (b = 0; b <= 9; b++)
{
m = a * b;

if (b != 9 && m < 9)
{
putchar(m + '0');
putchar(',');
putchar(' ');
putchar(' ');
}
if (b != 9 && m > 9)
{
putchar((m / 10) + '0');
putchar((m % 10) + '0');
putchar(',');
putchar(' ');
}
if (b == 9 && m <= 9)
{
putchar(' ');
putchar(m + '0');
}
if (b == 9 && m > 9)
{
putchar((m / 10) + '0');
putchar((m % 10) + '0');
}
}
putchar('\n');
}

return (0);
}
