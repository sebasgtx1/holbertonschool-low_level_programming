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
while (c < 51)
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
if (a == 54)
{
break;
}
if (b > 51 && c >= 50)
{
break;
}
putchar(c);
putchar(b);
putchar(58);
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
