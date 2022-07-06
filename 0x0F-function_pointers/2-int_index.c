#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
* int_index - we search integer here
* @array: array
* @size: size
* @cmp: function pointer
* Return: index
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]) != 0)
	return (i);
	}
}
