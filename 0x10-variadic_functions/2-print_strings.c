#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
* print_strings - print strings
* @separator: separator
* @n: number of strings
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	char *X;
	unsigned int i;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
	X = va_arg(arg, char*);
	if (X == NULL)
		printf("(nil)");
	else
		printf("%s", X);
	if (i < (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
