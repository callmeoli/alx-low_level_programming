#include "search_algos.h"
/**
 * linear_search - Entry point
 * @array: input array
 * @size: size of array
 * @value: value to be found
 * Return: check result
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	for (i = 0; i < (int)size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			return (i);
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	return (-1);
}
