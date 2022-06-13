#include <stdio.h>
#include "main.h"
/**
* modif_my_param - set the integer to 402
*@m: a pointer the integer we want to set to 402
*
*
*Return: nothing
*/
int main(void)
{

	int n;
	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
