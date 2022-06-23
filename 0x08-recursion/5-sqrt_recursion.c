#include "main.h"
/**
* sqrt1 - return the square root of number
* @n: rooted number
* @y: iteration number
* Return - the root of number
*/
int sqrt1(int n, int y)
{
	if (y * y == n)
	{
		return (y);
	}
	else if (y < 0)
	{
	return (-1);
	}
	else
	{
	sqrt1(n, y - 1);
	}
}
/**
* _sqrt_recursion - return the square root of number
* @n: rooted number
* @y: iteration number
* Return - the root of number
*/
int _sqrt_recursion(int n)
{
	int y = n;

	sqrt1(n, y);
}
