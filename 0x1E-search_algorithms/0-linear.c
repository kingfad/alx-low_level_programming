#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - search a value in a linear way
 * @array: array to check
 * @size: size of the array
 * @value: value to search for
 * Return: -1 in case of failure or the first index of the value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
