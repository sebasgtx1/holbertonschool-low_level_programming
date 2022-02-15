#include <ctype.h>
/**
 * _isalpha - checks for alphabetic character
 * @c: is a character
 * Return: 0 (Success) 1 (Fail)
*/
int _isalpha(int c)
{

if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
