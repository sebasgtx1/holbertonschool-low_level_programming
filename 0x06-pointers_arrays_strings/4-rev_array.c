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
int i, j, keep;

n--;
		for (j = 0; j < n; j++)
		{
			keep = *(a + j);
			*(a + j) = *(a + n);
			*(a + n) = keep;
		}

}
