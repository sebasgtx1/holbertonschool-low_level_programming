#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number where find the index bit
 * @index: index to be found
 * Return: value of a bit at a given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int idx = 0;

	for (; idx <= index; idx++)
	{
		if (idx == index)
			return ((n & 1));
		n >>= 1;
	}
	return (-1);
}
