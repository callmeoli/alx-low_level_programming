#include "search_algos.h"
/**
 * binary_search - Entry point
 * @array: input array
 * @size: size of array
 * @value: value to be found
 * Return: check result
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0;
	int r = (int)size - 1;
	int m;
	int i;

	if (array == NULL)
	{
		return (-1);
	}

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i <= (r - 1))
			{
			printf("%d, ", array[i]);
			}
			else
			{
				printf("%d\n", array[i]);
			}
		}
		m = (l + r) / 2;
		if (array[m] < value)
		{
			l = m + 1;
		}
		else if (array[m] > value)
		{
			r = m - 1;
		}
		else
		{
			return (m);
		}
	}
	return (-1);
}
