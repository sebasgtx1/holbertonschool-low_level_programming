#include <stdio.h>

/**
 * main - prints a messge with printf
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int c;

for (c = 48; c < 58; ++c)
{
putchar(c);

if (c < 58)
{
putchar(44);
putchar(' ');
}
}
putchar('\n');
return (0);
}
