#include <stdio.h>

/**
 * main - Prints the number of arguments passed to it.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main (int argc, char *argv[])
{
	int count = argc - 1;
	printf("%d\n", count);
	(void)argv;
	return (0);
}
