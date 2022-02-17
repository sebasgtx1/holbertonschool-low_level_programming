#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer
 * Return: no return
 */
void print_number(int n)
{
	int n2, n3;

	if (n < 0)
	{
	_putchar('-');
	_putchar(-n / 10 + 48);
	_putchar(-n % 10 + 48);
	}
	if (n == 0)
	{
	_putchar(48);
	}
	if (n > 0 && n <= 10)
	{
	_putchar(n / 10 + 48);
	_putchar(n % 10 + 48);
	}
	if (n > 10 && n < 100)
	{
	_putchar(n / 10 + 48);
	_putchar(n % 10 + 48);
	}
	if (n >= 100 && n < 1000)
	{
	n2 = n / 10;
	_putchar(n / 100 + 48);
	_putchar(n2 % 10 + 48);
	_putchar(n % 10 + 48);
	}
	if (n >= 1000)
	{
	n2 = n / 10;
	n3 = n2 / 10;
	_putchar(n / 1000 + 48);
	_putchar(n3 % 10 + 48);
	_putchar(n2 % 10 + 48);
	_putchar(n % 10 + 48);
	}
}
