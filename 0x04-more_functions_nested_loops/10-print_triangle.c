#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangule
 * Return: no return
 */
void print_triangle(int size)
{
	int i, i2, i3;

	for (i = 1; i < size; i++)
	{
		for (i2 = 1; i2 < size - i; i2++)
		{
			_putchar(32);
		}
		for (i3 = 1; i3 <= size - i2; i3++)
		{
			_putchar(35);
		}
		if (size == 0)
		{
			_putchar(35);
		}
	_putchar('\n');
	}
	if (size == 0)
	{
	_putchar(35);
	_putchar('\n');
	}
}
