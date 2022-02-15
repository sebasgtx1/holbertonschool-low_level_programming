#include <stdio.h>
#include <ctype.h>
/**
 * print_sign -  checks sing of a number
 * @n: is a number
 * Return: 0 if n is zero 1 if n>0 and -1 if n<0
*/
int print_sign(int n)
{

if (n > 0)
{
return (1);
putchar(43);
}
else if (n < 0)
{
return (-1);
putchar(45);
}
else
{
return (0);
putchar(48);
}
putchar('\n');
}
