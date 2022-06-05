#include <stdio.h>
/**
 * main - return integral of 0
 *
 * Description: print the size of diffirent characters and words
 *
 * Return: Always succes return 0
 *
 */
int main(void)
{
	printf("Size of a char is: %zu byte(s)\n", sizeof(char));
	printf("Size of an int is: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int is: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int is: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)", sizeof(float));
		return (0);
}
