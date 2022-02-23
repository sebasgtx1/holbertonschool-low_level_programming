#include "main.h"

/**
 * _strcat - converts a string to an integer
 * @src: string.
 * @dest: string.
 * Return: dest string.
 */
char *_strcat(char *dest, char *src)
{
int j = 0;
int i = 0;
int k = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (*(src + j) != '\0')
	{
		j++;
	}

	for (k = i; k < (i + j); k++)
	{
		*(dest + k) = src[k - i];
	}
return (dest);
}
