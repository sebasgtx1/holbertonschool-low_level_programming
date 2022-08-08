#include "search_algos.h"
/**
 * linear_search -  function that searches for a value in an array
 * of integers using the Linear search algorithm
 * @size: size of the array
 * @array: array on which to search
 * @value: value to search
 * Return: If value is not present in array or if array is NULL,
 * the function returns -1, otherwise, returns the value's index
 */

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (!array)
		return (-1);

	for (; i < (int) size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);

}
