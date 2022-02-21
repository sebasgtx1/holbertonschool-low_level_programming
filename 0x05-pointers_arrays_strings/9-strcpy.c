#include "main.h"
/**
 * _strcpy - copy a string
 * @src: string
 * @dest: string
 * Return: copy string
 */

char *_strcpy(char *dest, char *src)
{
int i;
i = 0;

	while (i >= 0)
	{
	*(dest + i) = *(src + i);
	i++;
	if  (*(src + i) == '\0')
	{
	break;
	}
	i++;
	}
return (dest);
}
