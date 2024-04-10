#include "search_algos.h"

/**
 * linear_search - searches the value in an array
 * @array: pointer to the first element in an array
 * @size: number of elements in an array
 * @value: the value to search for
 * Return: if NULL return -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
