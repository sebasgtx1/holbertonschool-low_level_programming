#include "holberton.h"
/**
 * conjugate - conjugate a complex number.
 * @c: c strcuture
 * Return: the c structure with the conjugate
 */

complex conjugate(complex c)
{

	c.im = -c.im;
	return (c);

}
