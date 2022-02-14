#include <stdio.h>
#include <ctype.h>
/**
 * print_sign -  checks sing of a number
 * @n: is a number
 * Return: 0 (Success) 1 (Fail)
*/
int print_sign(int n)
{

if (n == 0)
{
return (0);
printf("0, %i", n);
}
if (n > 0)
{
return (1);
printf("+, %i", n);
}
if (n < 0)
{
return (-1);
printf("-, %i", n);
}
}
