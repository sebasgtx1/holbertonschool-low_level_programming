#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: inicialization of the array
 *
 * Return: pointer to the array or NULL of size == 0 or
 * if the memory location faild
 */

char *create_array(unsigned int size, char c)
{

	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
