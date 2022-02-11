#include <stdio.h>

/**
 * main - gives all the unique combinations of 3 digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, b, a;
i = 48;
b = 48;
a = 48;
while (a < 58)
{
i = 48;
while (i < 58)
{
b = 48;
if (a != i && a < i)
{
while (b < 58)
{
if (i != b && i < b)
{
putchar(a);
putchar(i);
putchar(b);
if (i == 56 && b == 57 && a == 55)
{
break;
}
putchar(44);
putchar(' ');
}
b++;
}
a++;
}
i++;
}
}
putchar('\n');
return (0);
}
