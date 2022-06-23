#include "main.h"
/**
 * _sqrt_recur - helper function
 * @n: num
 * @x: num
 * Return: output
 */
int _sqrt_recur(int n, int x)
{
    if (n < 0){
        return (0);
    }
	else if (x * x == n)
	{
		return (0);
	}
	else if (x * x > n)
	{
		return (1);
	}
	return (_sqrt_recur(n, x + 1));
}
/**
 *  is_prime_number - function that returns the 
 * @n: num
 * Return: check if number is prime or not
 */
int is_prime_number(int n)
{
	return (_sqrt_recur(n, 0));
}
