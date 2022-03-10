#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: amount of bytes
 * Return: pointer to the allocated memory
 * (if malloc fails, the exit status value is 98)
 */

void *malloc_checked(unsigned int b)
{
	char *memory;

	memory = malloc(b);

	if (memory == NULL)
	{
		free(memory);
		exit(98);
	}

	return (memory);

}
