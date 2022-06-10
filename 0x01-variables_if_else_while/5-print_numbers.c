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
	int alphabet;

	for (alphabet = '0'; alphabet <= '9'; alphabet++)
	{
	putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
