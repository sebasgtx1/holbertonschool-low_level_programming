#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _abs -  checks for lowercase character
 * @a: is a number
 * Return: 0 (Success)
*/
int _abs(int a)
{
if (a > 0)
{
return (a);
}

else
{
return (a * -1);
}

}
