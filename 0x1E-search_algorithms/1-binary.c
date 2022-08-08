#include "search_algos.h"
/**
 * print_array - funtion that prints an array
 * @start: begening
 * @end: end
 * @array: array to be printed
 * Return: No return
 */

void print_array(int start, int end, int *array)
{
	int i = 0;

	printf("Searching in array: ");
	for (i = start; i < end + 1; i++)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
		else
			printf("\n");
	}
}




/**
 * binary_search -  function that searches for a value in an array
 * of integers using the  Binary search algorithm
 * @size: size of the array
 * @array: array on which to search
 * @value: value to search
 * Return: If value is not present in array or if array is NULL,
 * the function returns -1, otherwise, returns the value's index
 */

int binary_search(int *array, size_t size, int value)
{
	int L = 0, R, m;

	if (!array)
		return (-1);
	R = size - 1;
	while (L <= R)
	{
		print_array(L, R, array);
		m = (L + R) / 2;
		if (array[m] < value)
			L = m + 1;
		else if (array[m] > value)
			R = m - 1;
		else
			return (m);
	}
	return (-1);
}
