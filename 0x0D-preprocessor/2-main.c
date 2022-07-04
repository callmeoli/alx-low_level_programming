#include <stdio.h>
/**
* main - print file name
* Return: 0
*/
void main(void)
{
	for (int i = 0; *(__FILE__ + i) != '\0'; i++)
	_putchar(*(__FILE__ + i));
}
