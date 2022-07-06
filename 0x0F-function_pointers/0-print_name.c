#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
* print_name - print name passed to it
* @name: name passed
* @f: function passed as parameter
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
