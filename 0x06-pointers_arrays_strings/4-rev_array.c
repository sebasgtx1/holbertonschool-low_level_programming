#include "main.h"
#include <stddef.h>
/**
 * reverse_array - reverses the content of an array of integers
 * @a: string.
 * @n: string.
 * Return: reverse string.
 */
void reverse_array(int *a, int n)
{

int r[1000];
int i, f, j;
i = 0;

	while (n - i != 0)
	{
	r[i] = *(a + i);
	i++;
	}
	f = i - 1;
	for (j = 0; j < i ; j++)
	{
	*(a + j) = r[f];
	f--;
	}

}
