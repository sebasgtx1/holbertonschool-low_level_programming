#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit -  print the last digit of a number
 * @n: is a number
 * Return: 0 (Success)
*/
int print_last_digit(int n)
{
int ld;

ld = n % 10;
if (ld < 0)
{
_putchar(-ld + 48);
return (-ld);
}
else
{
_putchar(ld + 48);
return (ld);
}
}
