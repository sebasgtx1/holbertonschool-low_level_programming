#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */

char *_strdup(char *str)
{
	char *strdup;
	int i = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	strdup = malloc(sizeof(char) * (i + 1));

	if (strdup == NULL)
		return (NULL);

	while (i >= 0)
	{
		strdup[i] = str[i];
		i--;
	}
	return (strdup);



}
