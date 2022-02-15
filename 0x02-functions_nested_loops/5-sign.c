#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_sign -  checks sing of a number.
 * @n: is a number
 * Return: 0 if n is zero 1 if n>0 and -1 if n<0
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
