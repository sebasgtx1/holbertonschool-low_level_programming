#include "main.h"

/**
 * _pow_ - gives the pow of a number
 * @base: base number
 * @pow: pow number
 * Return: the pow of the given number
 */
unsigned int _pow_(unsigned int base, unsigned int pow)
{
	unsigned int i, num = base;

	if (pow == 0)
		return (1);
	for (i = 0; i < (pow - 1); i++)
		num *= base;
	return (num);
}

/**
 * binary_to_uint - converts a binary in unsigned int
 * @b: pointer to a string that contains the binary
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, factor = 0, number = 0;
	int i = 0;

	if (!b)
		return (0);
	for (; b[i]; i++)
		;
	i--;
	for (; i >= 0; i--)
	{
		if ((b[i] == '0') | (b[i] == '1'))
		{
			factor = (b[i] - '0') * _pow_(2, n);
			number += factor;
			n++;
		}
		else
			return (0);
	}
	return (number);
}
