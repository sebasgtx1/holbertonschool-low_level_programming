#include <stdio.h>

/**
 * main - prints a messge with printf
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int c, d;

for (c = 48 ; c < 58 ; ++c)
{
putchar(c);
}

for (d = 62 ; d < 67 ; ++d)
{
putchar(d);
}
putchar('\n');
return (0);
}
