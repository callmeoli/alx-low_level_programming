#include <stdio.h>
/**
* main - print file name
* Return: 0
*/
int main(void)
{
int i;

	for (i = 0; *(__FILE__ + i) != '\0'; i++)
	_putchar(*(__FILE__ + i));
	return (0);
}
