#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - a function which copy and return pointer to string
* @str: poninter
*
* Return: poniter to new location
*/
char *_strdup(char *str)
{
if (str[0] == '\0')
{
	return (NULL);
}
int i = 0;

while (str[i] != '\0')
{
i++;
}
char *ptr = malloc(sizeof(char) * i);
int j = 0;

while (j < i)
{
ptr[j] = str[j];
}
if (ptr[j] != str[i])
{
return (NULL);
}
return (ptr);
}
