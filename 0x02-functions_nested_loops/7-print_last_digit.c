#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit -  print the last digit of a number
 * @a: is a number
 * Return: 0 (Success)
*/
int print_last_digit(int a)
{
int ld;
ld = a % 10;
putchar (ld + '0');
return (0);
}
