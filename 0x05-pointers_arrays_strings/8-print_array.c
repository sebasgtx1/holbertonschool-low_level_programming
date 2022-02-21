#include "main.h"
#include <stdio.h>
/**
 * print_array - returns the length of a string
 * @a: array
 * @n: # of strings to be printed
 * Return: no return
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d", *(a + i));
	if (i != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
