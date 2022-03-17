#include "holberton.h"
/**
 * argument - calculates and return the argument of
 * a given complex number
 * @c: struct complex
 * Return: a double (argument)
 */

double argument(complex c)
{

	double arg, a, b;

	a = (double) c.im;
	b = (double) c.re;

	if (b == 0)
	{
		if (a == 0)
		{
			arg = 0;
		}
		if (a > 0)
		{
			arg = pi / 2;
		}

		if (a < 0)
		{
			arg = 3 * pi / 2;
		}
	}

	arg = atan(a / b);
	return (arg);
}
