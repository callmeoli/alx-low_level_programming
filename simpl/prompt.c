#include <stdio.h>
#include <unistd.h>
/**
* type_prompt - types the prompt #cisfun$
* Return: void
*/

void type_prompt(void)
{
static int first_time = 1;
if (first_time) /* clear screen for the first time */
{
fflush(stdout); /* clear screen */
first_time = 0;
}
printf("#cisfun$");
}
