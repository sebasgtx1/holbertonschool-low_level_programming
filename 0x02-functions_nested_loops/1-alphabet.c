#include <main.h>

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: no return
 */
void print_alphabet(void)
{
int c;
for (c = 97; c <= 122; ++c)
{
putchar(c);
}
putchar('\n');
}
