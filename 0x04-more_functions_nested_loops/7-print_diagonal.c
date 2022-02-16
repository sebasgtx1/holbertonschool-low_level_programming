#include "main.h"
/**
 * print_diagonal -  draws a diagonal line in the terminal
 * @n: number of lines to be printed
 * Return: no return
 */
void print_diagonal(int n)
{
	int i, i2;

	for (i = 1; i <= n; i++)
	{
		for (i2 = 1; i2 < i; i2++)
		{
		_putchar(32);

		}

	if (n > 0)
	{
	_putchar(92);
	}
	_putchar('\n');
}

if (n == 0)
{
_putchar('\n');
}
}
