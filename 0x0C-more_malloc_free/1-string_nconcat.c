#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: amount of bytes
 * Return: pointer to the allocated memory
 * (if malloc fails, status value is equal to 98)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *memory;

	unsigned int i = 0, j = 0, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (; *(s1 + i) != '\0'; i++)
		;
	for (; *(s2 + j) != '\0'; j++)
		;
	if (n >= j)
		n = j;

	memory = malloc(i + n + 1);

	if (memory == NULL)
	{
		free(memory);
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		memory[k] = *(s1 + k);
	}

	for (; k < (i + n); k++)
	{
		memory[k] = *(s2 + (k - i));
	}
	memory[k] = '\0';
	return (memory);
}
