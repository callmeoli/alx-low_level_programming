#include <stdlib.h>

#include <time.h>

/* more headers goes there */

#include <stdio.h>
/**
* main -> this is a function to print lower case alphabets
* Return: success always 0
*/
int main(void)
{
	int alphabet, Beta;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	putchar(alphabet);
	}
	for (Beta = 'A'; Beta <= 'Z'; Beta++)
	{
	putchar(Beta);
	}
	putchar('\n');
	return (0);
}
