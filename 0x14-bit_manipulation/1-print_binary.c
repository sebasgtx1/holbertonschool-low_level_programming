#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 * Return: no return
 */
void print_binary(unsigned long int n)
{
	unsigned long int div = 0, bol = 0;

	while (n >= 2)
	{
		n = n - 2;
		div++;
		bol = 1;
	}
	if (bol == 1)
		print_binary(div);
	 _putchar (n + '0');
}
