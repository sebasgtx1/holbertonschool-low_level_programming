#include <stdio.h>
/**
 * times_table - Prints a times table
 *
 * Return: Always 0 (Success)
 */
int times_table(void)
{
int a, b, m;

for (a = 0; a <= 9; a++)
{
putchar(48);
for (b = 1; b <= 9; b++)
{
m = a * b;
putchar(44);
putchar(32);
if (m <= 9)
{
putchar(32);
putchar(m + 48);
}
else
{
putchar((m / 10) + 48);
putchar((m % 10) + 48);
}
}
putchar('\n');
}
}
