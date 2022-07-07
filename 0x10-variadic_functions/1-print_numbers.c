#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
* print_numbers - print numbers
* @separator: separator
* @n: variable
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x = 0;
	va_list args;

	if (separator == NULL)
	exit(1);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
	x = va_arg(args, int);
	if (i < (n - 1))
	printf("%d%s", x, separator);
	else
	printf("%d\n", x);
	}
}
