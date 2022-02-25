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
int i, keep;

n--;
		for (i = 0; i < n; i++)
		{
			keep = *(a + i);
			*(a + i) = *(a + n);
			*(a + n) = keep;
		}

}
