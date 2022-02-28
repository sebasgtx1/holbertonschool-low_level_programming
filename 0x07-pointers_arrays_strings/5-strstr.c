#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring.
 * @needle: substring to search
 * @haystack: String where search
 * Return: a pointer to the beginning of the located
 * substring, or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{

	char *comphs;
	char *compnd;

	while (*haystack != '\0')
	{
		comphs = haystack;
		compnd = needle;

		while (*haystack != '\0' && *compnd != '\0' && *haystack == *compnd)
		{
			haystack++;
			compnd++;
		}
		if (!*compnd)
			return (comphs);
		haystack = comphs + 1;
	}
return (NULL);
}
