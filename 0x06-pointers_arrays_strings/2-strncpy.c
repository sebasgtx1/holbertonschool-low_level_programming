#include "main.h"

/**
 * _strncpy - copy a string
 * @src: string.
 * @dest: string.
 * @n: number of elements to be concatened in dest
 * Return: dest string.
 */
char *_strncpy(char *dest, char *src, int n)
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

	for (k = 0; (k < n && src[k] != '\0'); k++)
	{

	*(dest + k) = src[k];

	}

	for ( ; k < n; k++)
	{
	*(dest + k) = '\0';
	}

return (dest);
}
