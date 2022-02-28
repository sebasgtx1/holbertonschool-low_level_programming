#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @accept: substring
 * @s: String thats contains the substring
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{

	int i, j, bolean;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		bolean = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bolean = 0;
				break;
			}
		}
	if (bolean == 1)
		break;
	}

	return (i);
}
