#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: pointer to an int
 * @b: pointer to an int
 * Return: no return
 */

void swap_int(int *a, int *b)
{
int aux = *a;
*a = *b;
*b = aux;
}
