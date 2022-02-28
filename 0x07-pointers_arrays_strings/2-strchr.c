#include "main.h"
#include <stdio.h>

/**
 * _strchr - fills a block of memory with a constant byte
 * @c: Caracter to be located
 * @s: String thats contains the character
 * Return: a pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
{
	int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);

	if (*(s + i) == c)
		return (s + i);
	return (NULL);
}
}
