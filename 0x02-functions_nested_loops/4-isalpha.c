#include <ctype.h>
/**
 * _isalpha - checks for alphabetic character
 * @c: is a character
 * Return: 0 (Success) 1 (Fail)
*/
int _isalpha(int c)
{

int comp;
comp = isalpha(c);

if (comp == 0)
{
return (0);
}
else
{
return (1);
}
}
