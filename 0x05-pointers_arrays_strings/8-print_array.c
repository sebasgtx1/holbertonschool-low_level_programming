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
int i = 0;
	printf("%d", *(a + i));
	for (i = 1; i < n; i++)
	{
	printf(", %d", *(a + i));
	}
_putchar('\n');
}
