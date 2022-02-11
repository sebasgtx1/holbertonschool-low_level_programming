#include <stdio.h>

/**
 * main - prints a messge with printf
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int c, a;

for (c = 48; c < 58; ++c)
{
for (a = 48; a < 58; ++a)
{
putchar(c);
putchar(a);
if (c < 57)
{
putchar(44);
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
