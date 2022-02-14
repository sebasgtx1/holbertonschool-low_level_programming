#include <ctype.h>
/**
 * _islower -  checks for lowercase character
 * @c: is a character
 * Return: 0 (Success) 1 (Fail)
*/
int _islower(int c)
{

if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
