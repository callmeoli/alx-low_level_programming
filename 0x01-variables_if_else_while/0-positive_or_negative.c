#include <stdio.h>
#include <time.h>
/* more header goes there */
#include <stdlib.h>
/**
 * main - return alphabets expect e and q
 *
 * Description: print the required results
 *
 * Return: integer value 0
 *
 */
	int main(void)
	{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is postive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is negative\n", n);
	}

		return (0);
	}
