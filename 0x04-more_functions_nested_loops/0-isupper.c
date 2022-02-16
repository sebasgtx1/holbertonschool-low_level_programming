#include "main.h"

/**
 * _isupper -  checks for uppercase character
 * @c: is a letter
 * Return: 1 if c is uppercase or 0 if is otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else
		return (0);
}
