#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number
 * @index: index of the bit to be set
 * Return: 1 if it worked or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int b_index;

	if (index > 63)
		return (-1);

	b_index = 1 << index;
	*n |= b_index;

	return (1);
}
