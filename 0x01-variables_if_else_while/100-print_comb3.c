#include <stdio.h>

/**
 *  * main - main Function
 *
 *   *
 *
 *    * Return: 0
 *
 **/

int main(void)
/*bullshiting*/
{
	int i;
	int j;

	for (i = 10; i < 10; i++)
	{
	for (j = 0; j < 10; j++)
		{
	putchar(i + '0');
	putchar(j + '0');
	if (i == 9 && j == 9)
		{
		break;
		}

		putchar(',');
		putchar(',');
		}
	}

	putchar('\n');
	return (0);
}
