#include <stdio.h>
#include <stdarg.h>
/**
* sum_them_all - sum all the passed
* @n: number of passed
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	int x = 0;
	int sum = 0;
	unsigned int i;

va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
	{
	x = va_arg(args, int);
	sum = sum + x;
	}
return (sum);
}
