#include "search_algos.h"
#include <math.h>
/**
 * jump_search - Entry point
 * @array: input array
 * @size: size of array
 * @value: value to be found
 * Return: check result
 */
int jump_search(int *array, size_t size, int value)
{
	int sz = (int)size;
	int i, start = 0, end = (int)sqrt(sz);

	if (array == NULL)
	{
		return (-1);
	}
	printf("Value checked array[%d] = [%d]\n", start, array[start]);
	if (array[start] == value)
	{
		return (start);
	}
	printf("Value checked array[%d] = [%d]\n", end, array[end]);
	if (array[end] == value)
	{
		return (end);
	}

	while (array[end] < value && start < sz)
	{
		start = end;
		end = end + (int)sqrt(sz);
			if (end > sz - 1)
			{
				end = sz;
			}
	}
	printf("Value found between indexes [%d] and [%d]\n", start, end);
	for (i = start; i < end; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
