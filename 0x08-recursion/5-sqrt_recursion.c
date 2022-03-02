#include "main.h"

/**
 * _aprox_to_sqrt - aproximates to sqrt of n and returns it
 * @x: number to calculate sqrt
 * @y: aproximation to sqrt
 * Return: sqrt of x
 */
int _aprox_to_sqrt(int x, int y)
{

if (y * y > x)
{
return (-1);
}
if (y * y == x)
{
return (y);
}
y++;
return (_aprox_to_sqrt(x, y));
}
/**
 * _sqrt_recursion - gives the sqrt of a number
 * @n: number to calculate the sqrt
 * Return: sqrt n
 */
int _sqrt_recursion(int n)
{
	return (_aprox_to_sqrt(n, 1));
}

