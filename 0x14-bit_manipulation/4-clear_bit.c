#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number
 * @index: index of the bit to be clear
 * Return: 1 if it worked or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int b_index;

	if (index > 63)
		return (-1);

	b_index = ~(1 << index);
	*n &= b_index;

	return (1);
}
