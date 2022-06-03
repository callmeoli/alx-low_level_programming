#include  <time.h>
/*more header goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - check for conditions
 *
 * Description: return the result for the condition
 *
 * Return: returnthe integer value 0
 *
 */

int main(void)
{
	int n;

	srand(time(a));
	n = rand () - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
		
	}
	else if (n==0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n" n);
	}
	return (0); 
}
