#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string.
 * @s2: string.
 * Return: dest string.
 */
int _strcmp(char *s1, char *s2)
{

int j = 0;
int i = 0;
int k = 0;

	while (*(s1 + i) != '\0')
	{
		i++;
	}

	while (*(s2 + j) != '\0')
	{
		j++;
	}

	if (i == j)
	{
		k = 0;
	}

	if (i > j || i < j)
	{
		k = *(s1 + (i - 1)) - *(s2 + (j - 1));
	}
	
return (k);
}
