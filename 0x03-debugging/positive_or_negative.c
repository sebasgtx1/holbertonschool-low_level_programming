#include <stdio.h>
#include "main.h"
/**
 * positive_or_negative - prints a messge with printf
 * @n: is a number
 * Return: Always 0 (Success)
 */

void positive_or_negative(int n)
{


if (n < 0)
{
printf("%i is negative\n", n);
}

if (n > 0)
{
printf("%i is positive\n", n);
}

if (n == 0)
{
printf("%i is zero\n", n);
}

}
