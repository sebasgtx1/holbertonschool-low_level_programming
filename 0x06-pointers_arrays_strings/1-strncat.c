#include "main.h"

/**
 * _strncat - concatenates a string with the n bytes of another one
 * @src: string.
 * @dest: string.
 * @n: number of elements to be concatened in dest
 * Return: dest string.
 */
char *_strncat(char *dest, char *src, int n)
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

	for (k = i; k < (i + n); k++)
	{
		if (k > j + i)
		{
		break;
		}
	*(dest + k) = src[k - i];

	}
return (dest);
}
