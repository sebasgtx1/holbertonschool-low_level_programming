#include "holberton.h"
/**
 * modulus - calculate and return the modulus of
 * a given complex number
 * @c: struct complex
 * Return: a double (modulus)
 */

double modulus(complex c)
{
	double mod;

	mod = (double) sqrt((pow(c.re, 2) + pow(c.im, 2)));
	return (mod);
}
