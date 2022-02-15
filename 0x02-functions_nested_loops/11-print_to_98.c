#include <stdio.h>
/**
 * print_to_98 - prints number until 98
 * @a: number
 * Return: nothing
 */
int print_to_98(int a)
{
int i, d1, d2, d3;
for (i = a; i < 98; i++)
{
if (i >= 0 && i < 10)
{
putchar(i + '0');
putchar(',');
putchar(' ');
}
if (i >= 10 && i <= 98)
{
d2 = i % 10;
d1 = i / 10;
putchar(d1 + '0');
putchar(d2 + '0');
putchar(',');
putchar(' ');
}
if (a > 98 && a < 100 || i < 100 && i > 98)
{
d2 = i % 10;
d1 = i / 10;
putchar(d1 + '0');
putchar(d2 + '0');
putchar(',');
putchar(' ');
}
if (i == 98)
{
d2 = i % 10;
d1 = i / 10;
putchar(d1 + '0');
putchar(d2 + '0');
break;
}
}
}
