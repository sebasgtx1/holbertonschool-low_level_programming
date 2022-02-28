#include "main.h"

/**
 * _memcpy - copies a memory area
 * @src: Starting address of memory to be copied
 * @dest: Destination address to be filled
 * @n: Number of bytes to be copied from s
 * Return: a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);

}
