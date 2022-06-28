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
int j;
char *ptr;
int i;

if (str == NULL)
{
return (NULL);
}
i = 0;

while (str[i] != '\0')
{
i++;
}
ptr = (char *) malloc(sizeof(char) * (i + 1));
j = 0;
if (str[0] == '\0')
{
return (ptr);
}
while (j < i)
{
ptr[j] = str[j];
j++;
}
if (ptr[j] != str[i])
{
return (NULL);
}
return (ptr);
}
