#include "holberton.h"
/**
 * addition - sum two complex numbers
 * @c1: struct complex for the first complex
 * @c2: struct complex for the second complex
 * @c3: struct complex for the result of the sum
 * Return: a double (argument)
 */

void addition(complex c1, complex c2, complex *c3)
{
	c3->re = (c1.re + c2.re);
	c3->im = (c1.im + c2.im);
}
