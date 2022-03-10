#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of the allocated space of ptr in bytes
 * @new_size: new size of the new memory block in bytes
 * Return: ptr in the new allocation
 * (if new_size == old_size, returns ptr without changes)
 * (if malloc fails, returns NULL)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *memory;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		free(ptr);
		memory = malloc(new_size);
		return (memory);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);
	memory = malloc(new_size);

	if (memory == NULL)
		return (NULL);

	return (memory);
}
