#include "holberton.h"
/**
 * multiplication - multiplicates two complex numbers
 * @c1: c struct for the first complex
 * @c2: c struct for the second complex
 * @c3: c struct for the result of the multiplication
 * Return: no return
 */
void multiplication(complex c1, complex c2, complex *c3)
{
	c3->re = (c1.re * c2.re) - (c1.im * c2.im);
	c3->im = (c1.re * c2.im) + (c1.im * c2.re);
}
