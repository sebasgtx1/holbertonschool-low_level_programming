#include <stdio.h>

/**
 * main - prints a messge with printf
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char c;

for (c = 'a'; c <= 'z'; ++c)
{
if (c == 'q' || c == 'e')
{
c++;
}
putchar (c);
}
putchar ('\n');
return (0);
}
