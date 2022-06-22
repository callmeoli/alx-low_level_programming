#include "main.h"
/**
* _puts_recursion - print string
* s - input string
* @s: input string
* @i - count variable
*/
void _puts_recursion(char *s)
{
int i = 0;
	_putchar(s[i]);
	i++;
	if (s[i] != '\0')
	{
	_puts_recursion(s + i);
	}
	if (i > 2)
	{
	if (s[i] == '\0')
	{
	_putchar('\n');
	}
	}
}
