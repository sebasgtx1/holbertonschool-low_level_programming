#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array
 * @array: integer array given as a parameter
 * @size: size of the array
 * @action: pointer to the function that the user need
 * Return: no return
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;
	int temp = 0;

	if (array && size > 0)
		for (; i < size; i++)
		{
			temp = array[i];
			action(temp);
		}

}
