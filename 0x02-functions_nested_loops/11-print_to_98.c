#include <stdio.h>
/**
 * print_to_98 - prints number until 98
 * @a: number
 * Return: 0 (Succes)
 */
int print_to_98(int a)
{
int i, d1, d2, d3;
i = 0;
if (a <= -10)
{
for (i = a; i <= 98; i++)
{
if (i == 98)
{
d2 = i % 10;
d1 = i / 10;
putchar('-');
putchar(d1 + '0');
putchar(d2 + '0');
break;
}
d2 = i % 10;
d1 = i / 10;
putchar('-');
putchar(d1 + '0');
putchar(d2 + '0');
putchar(',');
putchar(' ');
}
}
if (a < 0 && a > -10)
{
for (i = a; i <= 98; i++)
{
if (i == 98)
{
putchar('-');
putchar(i + '0');
break;
}
putchar('-');
putchar(-i + '0');
putchar(',');
putchar(' ');
}
}
if (a >= 0 && a < 10)
{
for (i = a; i < 10; i++)
{
if (i == 98)
{
putchar(i + '0');
break;
}
putchar(i + '0');
putchar(',');
putchar(' ');
}
}
if (a >= 10 && a <= 98)
{
for (i = a; i <= 98; i++)
{
if (i == 98)
{
d2 = i % 10;
d1 = i / 10;
putchar(d1 + '0');
putchar(d2 + '0');
a = 0;
i = 0;
break;
}
d2 = i % 10;
d1 = i / 10;
putchar(d1 + '0');
putchar(d2 + '0');
putchar(',');
putchar(' ');
}
}
if (i >= 10 && i <= 98)
{
a = i;
for (i = a; i <= 98; i++)
{
if (i == 98)
{
d2 = i % 10;
d1 = i / 10;
putchar(d1 + '0');
putchar(d2 + '0');
break;
}
d2 = i % 10;
d1 = i / 10;
putchar(d1 + '0');
putchar(d2 + '0');
putchar(',');
putchar(' ');
}
}
if (a > 98 && a < 100 || i < 100 && i > 98)
{
for (i = a; i >= 98; i--)
{
if (i == 98)
{
d2 = i % 10;
d1 = i / 10;
putchar(d1 + '0');
putchar(d2 + '0');
a = 0;
break;
}
d2 = i % 10;
d1 = i / 10;
putchar(d1 + '0');
putchar(d2 + '0');
putchar(',');
putchar(' ');
}
}
if (a >= 100 && a < 1000)
{
for (i = a; i >= 100; i--)
{
if (i == 98)
{
d3 = i % 10;
d2 = (i / 10) % 10;
d1 = (i / 100) % 10;
putchar(d1 + '0');
putchar(d2 + '0');
putchar(d3 + '0');
break;
}
d3 = i % 10;
d2 = (i / 10) % 10;
d1 = (i / 100) % 10;
putchar(d1 + '0');
putchar(d2 + '0');
putchar(d3 + '0');
putchar(',');
putchar(' ');
}
}
if (a > 98 && a < 100 || i < 100 && i > 98)
{
a = i;
for (i = a; i >= 98; i--)
{
if (i == 98)
{
d2 = i % 10;
d1 = i / 10;
putchar(d1 + '0');
putchar(d2 + '0');
break;
}
d2 = i % 10;
d1 = i / 10;
putchar(d1 + '0');
putchar(d2 + '0');
putchar(',');
putchar(' ');
}
}
return (0);
}
