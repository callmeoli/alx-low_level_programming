#include "main.h"
/**
*print_alphabet_x10 - prints 10 times the alphabet, in lowercase
*followed by a new line
*Return: Always 0
*/
void print_alphabet(void)
{
	char c;
	int  i = 1;
	for (i <= 10, i++ ){
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	}
} 
