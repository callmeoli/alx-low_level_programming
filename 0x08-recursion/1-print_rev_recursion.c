#include "main.h"
/**
* _print_rev_recursion - print strings in reverse order
* @s: string value
*
*/
void _print_rev_recursion(char *s)
{

if (*s != '\0')
{
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
}
