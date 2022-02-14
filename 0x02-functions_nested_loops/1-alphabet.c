#include <stdio.h>

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; ++c)
{
putchar(c);
}
putchar('\n');
return (0);
}
