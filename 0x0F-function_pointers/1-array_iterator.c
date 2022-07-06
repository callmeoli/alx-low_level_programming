#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
* array_iterator - print each element of the array verticly
* @size: size of array
* @array: array
* @action: acton to be performed
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
