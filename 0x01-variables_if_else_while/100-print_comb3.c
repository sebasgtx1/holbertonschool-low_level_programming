#include <stdio.h>

/**
 * main - prints a messge with printf
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, a;
i = 48;
e = 48;
while (a < 58)
{
i = 48;
while (i < 58)
{
if (a != i && a < i)
{
putchar(a);
putchar(i);
if (i == 57 && a == 56)
{
break;
}
putchar(44);
putchar(' ');
}
i++;
}
a++;
}
putchar('\n');
return (0);
}
