#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements
 * @size: size of the type elements to be allocated
 * Return: pointer to the allocated memory
 * if nmemb or size is 0, returns NULL
 * if malloc fails, returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *memory;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	memory = malloc(nmemb * size);

	if (memory == NULL)
	{
		free(memory);
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
		memory[i] = 0;

	return (memory);
}
