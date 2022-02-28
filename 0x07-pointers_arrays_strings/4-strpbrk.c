#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @accept: substring to search
 * @s: String where search
 * Return: Returns a pointer to the byte in s that
 * matches one of the bytes in accept
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{

	int i, j, bolean;

	bolean = 1;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bolean = 0;
				break;
			}
		}
	if (bolean == 0)
		break;
	}

	return (s + i);
}
