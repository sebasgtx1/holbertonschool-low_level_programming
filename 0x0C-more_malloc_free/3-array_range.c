#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of ints
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly created array
 * (if man > mix, returns NULL)
 * (if malloc fails, returns NULL)
 */
int *array_range(int min, int max)
{
	int i, k;
	int *memory;

	if (min > max)
		return (NULL);

	memory = malloc(sizeof(int) * (max - min + 1));

	if (memory == NULL)
		return (NULL);

	for (i = min, k = 0; i <= max; i++, k++)
		memory[k] = i;

	return (memory);
}
