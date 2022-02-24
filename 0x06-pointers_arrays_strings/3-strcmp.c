#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string.
 * @s2: string.
 * Return: dest string.
 */
int _strcmp(char *s1, char *s2)
{

int i = 0;
int k = 0;

	while (k == 0)
	{
		if (*(s1 + i) == '\0' && *(s2 + i) == '\0')
		{
			break;
		}
	k = *(s1 + (i)) - *(s2 + (i));
	i++;
	}
return (k);
}
