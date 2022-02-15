#include <stdio.h>

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int print_alphabet(void)
{
int c;
for (c = 97; c <= 122; ++c)
{
putchar(c);
}
putchar('\n');
return (0);
}
