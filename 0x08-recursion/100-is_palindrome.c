#include "main.h"
/**
 * _strlen_recursion - gives the lenght of a string
 * @s: string
 * Return: lenght of a string
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * _comparation - comparates the first l/2 characters of
 * a string with the last l/2 of the same string
 * @s: string
 * @l: lenght of the string s
 * Return: the number of coincidences (equal comparations)
 */
int _comparation(char *s, int l)
{
	if (*s == *(s + (l - 1)) && *s != '\0')
	{
		l--;
		return (_comparation((s + 1), l - 1));
	}
	return (l);
}

/**
 * is_palindrome - determinates if a string is a plaindrome
 * @s: string
 * Return: 1 if s is a palindrome and 0 if is not
 */

int is_palindrome(char *s)
{
	int l = _strlen_recursion(s);

	int n = _comparation(s, l);

	if (n == -l)
		return (1);
	else
		return (0);
}
