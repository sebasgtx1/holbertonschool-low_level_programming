#include <stdio.h>

/**
 * main - Prints numbers between 00 to 99.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, a, b, c, dd1, dd2;
i = a = b = c = 48;
while (c < 58)
{
b = 48;
while (b < 58)
{
a = 48;
while (a < 58)
{
i = 48;
while (i < 58)
{
dd1 = (c * 10) + b;
dd2 = (a * 10) + i;
if (dd1 < dd2)
{
putchar(c);
putchar(b);
putchar(' ');
putchar(a);
putchar(i);
if (c == 57 && b == 56 && a == 57 && i == 57)
break;
putchar(44);
putchar(' ');
}
i++;
}
a++;
}
b++;
}
c++;
}
putchar('\n');
return (0);
}
