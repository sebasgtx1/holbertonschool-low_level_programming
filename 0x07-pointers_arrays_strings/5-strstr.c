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

	int i, j, k;

	k = 0;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if (*(haystack + i) == *(needle + k))
		{
			k = i;

			for (j = 0; *(haystack + j) != '\0'; j++)
			{

				if (*(haystack + k) != *(needle + j))
					return (haystack + i);
				k++;
			}
		}
	}
	return (NULL);
}
