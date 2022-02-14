#include <ctype.h>
/**
 * _islower -  checks for lowercase character
 * @c: is a character
 * Return: 0 (Success) 1 (Fail)
*/
int _islower(int c)
{

int comp;
comp = islower(c);

if (comp == 0)
{
return (0);
}
else
{
return (1);
}
}
