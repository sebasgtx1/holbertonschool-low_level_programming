#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer
 * Return: no return
 */
void print_number(int n)

{
int i, d, c;

	if (n < 0)
	{
		_putchar(45);
		i = n * -1;
	}
	else
	{
		i = n;
	}

	d = i;
	c = 1;

	while (d > 9)
	{
		d /= 10;
		c *= 10;
	}

	for (; c >= 1; c /= 10)
	{
		_putchar(((i / c) % 10) + 48);
	}
}
