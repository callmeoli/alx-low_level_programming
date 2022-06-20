#include "main.h"
#include <stdio.h>
/*
* *_memset - set char to assigned value
* @s: buffer character
* @b: assigned value
* @n: number of char to be assined
* 
* Return: 0 Always sucsses
*/
char *_memcpy(char *s, char b, unsigned int n) 
{
unsigned int i;
  
  for( i = 0;i < n;i++ )
    {
      s[i] = b;
    }
  return 0;
}
