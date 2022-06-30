#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked - function return the address of allocated memory.
* @b: the input parameter.
* @ptr: addtess of the allocated memory.
* Return: address.
*/
void *malloc_checked(unsigned int b)
{
unsigned int *ptr;

ptr = malloc(b);
return (ptr);
}
