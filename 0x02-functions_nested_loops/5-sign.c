#include <stdio.h>
#include <ctype.h>
/**
 * print_sign -  checks sing of a number
 * @n: is a number
 * Return: 0 (Success) 1 (Fail)
*/
int print_sign(int n)
{

if (n > 0)
{
putchar(43);
return (1);
}
if (n < 0)
{
putchar(45);
return (-1);
}
else ()
{
putchar(48);
return (0);
}
putchar('\n');
}
}
