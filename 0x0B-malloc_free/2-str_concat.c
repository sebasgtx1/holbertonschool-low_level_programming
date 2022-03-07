#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer to the concatenation of s1 and s2
 * an empty string if NULL is passed
 * NULL if the memory allocation fail
 */
char *str_concat(char *s1, char *s2)
{

	int i, j, k, size_s2;
	char *strconc;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	strconc = malloc(sizeof(char) * (i + j + 1));

	if (strconc == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		strconc[k] = s1[k];

	size_s2 = j;
	for (j = 0; j < size_s2; j++)
	{
		strconc[k] = s2[j];
		k++;
	}
	return (strconc);
}
