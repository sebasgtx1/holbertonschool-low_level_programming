#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: matrix
 * @size: matrix size
 * Return: no return
 */
void print_diagsums(int *a, int size)
{
	int i, dsum1 = 0, dsum2 = 0;

	for (i = 0; i < (size * size); i++)
	{
	if (i % (size + 1) == 0)
		dsum1 += *(a + i);
	if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
		dsum2 += *(a + i);
	}
	printf("%d, %d\n", dsum1, dsum2);
}
