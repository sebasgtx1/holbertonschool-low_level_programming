#include <stdio.h>

/**
 * jack_bauer - Prints a chronomether
 *
 * Return: Always 0 (Success)
 */
int jack_bauer(void)
{
int i, a, b, c;
i = a = b = c = 48;
while (c < 52)
{
b = 48;
while (b < 58)
{
a = 48;
while (a < 54)
{
i = 48;
while (i < 58)
{

putchar(c);
putchar(b);
putchar(' ');
putchar(a);
putchar(i);
putchar('\n');
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
